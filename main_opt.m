%% Setup
clear; clc;
cur = pwd;
addpath(genpath(cur));
export_path = fullfile(cur,'gen\');
COMPILE = true;

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
threelink_1step = addVertex(rabbit_1step, 'R_Stance', 'Domain', r_stance);

srcs = {'R_Stance'};
tars = {'R_Stance'};

threelink_1step = adddEdge(threelink_1step,srcs,tars);
threelink_1step = setEdgeProperties(threelink_1step,srcs,tars,...
    'Guard',{r_impact});

%% Define User Constraints
r_stance.UserNlpConstraint = str2func('right_stance_constraints');
r_impact.UserNlpConstraint = str2func('right_impact_constraints');

%% Define User Costs
u = r_stance.Inputs.Control.u;
u2r = tovector(norm(u).^2);
u2r_fun = SymFunction(['torque_' r_stance.Name], u2r, {u});

%% Create optimization problem
num_grid.RightStance = 10;
nlp = HybridTrajectoryOptimization('tl_1step',threelink_1step,num_grid,[],'EqualityConstraintBoundary',1e-4);

% Configure bounds
setBounds;
nlp.configure(bounds);

% Add costs
addRunningCost(nlp.Phase(getPhaseIndex(nlp,'RightStance')),u2r_fun,'u');

% Update
nlp.update;

%% Compile
if COMPILE
    if ~exist([export_path, 'opt\'])
        mkdir([export_path, 'opt\'])
    end
    rabbit.ExportKinematics([export_path,'kinematics\']);
    compileConstraint(nlp,[],[],[export_path, 'opt\']);
    compileObjective(nlp,[],[],[export_path, 'opt\']);
end

% compileConstraint(nlp,2,{'dxDiscreteMapRightImpact','xDiscreteMapRightImpact'},[export_path, 'opt\']);
% Example constraint removal
removeConstraint(nlp.Phase(1),'u_friction_cone_RightToe');

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
q_log_R = states{1}.x; % Right stance
q_log_L = q_log_R([1:3,6:7,4:5],:); % symmetric Left stance
q_log_L(1:3,:) = q_log_L(1:3,:) + repmat((q_log_R(1:3,end)-q_log_R(1:3,1)),1,21);

t_log_R = tspan{1};
t_log_L = t_log_R + t_log_R(end);

q_log = [q_log_R, q_log_L];
t_log = [t_log_R, t_log_L];

anim = Animator.FiveLinkAnimator(t_log, q_log);
anim.pov = Animator.AnimatorPointOfView.West;
anim.Animate(true);
anim.isLooping = false;
anim.updateWorldPosition = true;
anim.endTime = 20;
conGUI = Animator.AnimatorControls();
conGUI.anim = anim;





