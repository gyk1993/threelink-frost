%% Setup
clear; clc;
cur = pwd;
addpath(genpath(cur));
export_path = fullfile(cur,'gen\');
COMPILE = false;

% Add FROST
FROST_PATH = 'D:\Graduate\robots\SomePackage\frost';
addpath(FROST_PATH);
frost_addpath;

% Load model

threelink = ThreeLink('urdf/three_link_walker.urdf');
threelink.configureDynamics('DelayCoriolisSet',true);

% Define domains
r_stance = RightStance(threelink);
r_impact = RightImpact(r_stance,r_stance);


% 1step optimization
threelink_1step = HybridSystem('threelink_1step');
threelink_1step = addVertex(threelink_1step, 'R_Stance', 'Domain', r_stance);

srcs = {'R_Stance'};
tars = {'R_Stance'};

threelink_1step = addEdge(threelink_1step,srcs,tars);
threelink_1step = setEdgeProperties(threelink_1step,srcs,tars,...
    'Guard',{r_impact});
%% Define User Constraints
r_stance.UserNlpConstraint = str2func('right_stance_constraints');
r_impact.UserNlpConstraint = str2func('right_impact_constraints');

%% Define User Costs
u = r_stance.Inputs.Control.u;
p = r_stance.Params.ptimevc;
u2r = tovector(norm(u).^2)/(p(1)-p(2));
% u2r = tovector(norm(u).^2);
u2r_fun = SymFunction(['torque_' r_stance.Name], u2r, {u,p});

%% Create optimization problem
num_grid.RightStance = 10;
nlp = HybridTrajectoryOptimization('tl_1step',threelink_1step,num_grid,[],'EqualityConstraintBoundary',1e-4);

% Configure bounds
setBounds;
nlp.configure(bounds);

% Add costs
addRunningCost(nlp.Phase(getPhaseIndex(nlp,'R_Stance')),u2r_fun,{'u','ptimevc'});
% addRunningCost(nlp.Phase(getPhaseIndex(nlp,'R_Stance')),u2r_fun,{'u'});
% Update
nlp.update;

%% Compile
if COMPILE
    if ~exist([export_path, 'opt\'])
        mkdir([export_path, 'opt\'])
    end
    threelink.ExportKinematics([export_path,'kinematics\']);
    compileConstraint(nlp,[],[],[export_path, 'opt\']);
    compileObjective(nlp,[],[],[export_path, 'opt\']);
end
% compileObjective(nlp,1,['torque_' r_stance.Name],[export_path, 'opt\'])
% compileConstraint(nlp.Phase(2),{'dxDiscreteMapRightImpact','xDiscreteMapRightImpact'},[export_path, 'opt\']);
% Example constraint removal
removeConstraint(nlp.Phase(1),'u_friction_cone_RightToe');
nlp.Phase(1).removeConstraint('u_leftFootHeight_Right_Stance');
%% Create Ipopt solver
addpath(genpath(export_path));
nlp.update;
solver = IpoptApplication(nlp);

% Run Optimization
tic
% old = load('x0');
% [sol, info] = optimize(solver, old.sol);
[sol, info] = optimize(solver);
toc
[tspan, states, inputs, params] = exportSolution(nlp, sol);


%% Animation
% q_log_R = states{1}.x; % Right stance
% q_log_L = q_log_R([1:3,6:7,4:5],:); % symmetric Left stance
% q_log_L(1:3,:) = q_log_L(1:3,:) + repmat((q_log_R(1:3,end)-q_log_R(1:3,1)),1,21);
% 
% t_log_R = tspan{1};
% t_log_L = t_log_R + t_log_R(end);
% 
% q_log = [q_log_R, q_log_L];
% t_log = [t_log_R, t_log_L];
% 
% anim = Animator.FiveLinkAnimator(t_log, q_log);
% anim.pov = Animator.AnimatorPointOfView.West;
% anim.Animate(true);
% anim.isLooping = false;
% anim.updateWorldPosition = true;
% anim.endTime = 20;
% conGUI = Animator.AnimatorControls();
% conGUI.anim = anim;

%% Animation
q_log_R = states{1}.x; % Right stance
q_log_L = q_log_R([1:3,5,4],:); % symmetric Left stance
q_log_L(1:3,:) = q_log_L(1:3,:) + repmat((q_log_R(1:3,end)-q_log_R(1:3,1)),1,21);

t_log_R = tspan{1};
t_log_L = t_log_R + t_log_R(end);

q_log = [q_log_R, q_log_L];
t_log = [t_log_R, t_log_L];

disp = SetupthreelinkAnim(threelink);

leftToe_Height=[];
for steps = 1:10
    for i = 1:length(t_log)
        disp.update(q_log(:,i));
        axis([q_log(1,i)-1,q_log(1,i)+1,-0.2,1.2])
        axis equal
%         axis([-1,+1,-0.2,1.2])
        view([0,1,0])
        hold on 
        plot([-5 5],[0,0],'b')
        drawnow;
        temp=p_LeftToe(q_log(:,i));
        leftToe_Height = [leftToe_Height temp(3)];
        
        %     pause();
    end
    q_log(1,:)=q_log(1,:)+(q_log(1,end)-q_log(1,1));
end
save('2_mat','states')

