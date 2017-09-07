%% Set bounds for optimization problem

% Set Bounds 
model_bounds = threelink.getLimits();
model_bounds.states.x.lb = [ -10, 0.75, -pi/8, 1, 1];
model_bounds.states.x.ub = [10, 10, pi/8, 5, 5];
model_bounds.states.dx.lb = -100*ones(1,5);
model_bounds.states.dx.ub = 100*ones(1,5);
bounds = struct();

% Right Stance
bounds.R_Stance = model_bounds;
bounds.R_Stance.time.t0.lb = 0;
bounds.R_Stance.time.t0.ub = 0;
bounds.R_Stance.time.t0.x0 = 0;

bounds.R_Stance.time.tf.lb = 0.6;
bounds.R_Stance.time.tf.ub = 1;
bounds.R_Stance.time.tf.x0 = 1;

bounds.R_Stance.time.duration.lb = 0.6;
bounds.R_Stance.time.duration.ub = 1;
bounds.R_Stance.time.duration.x0 = 1;

bounds.R_Stance.inputs.ConstraintWrench.fRightToe.lb = -10000;
bounds.R_Stance.inputs.ConstraintWrench.fRightToe.ub = 10000;
bounds.R_Stance.inputs.ConstraintWrench.fRightToe.x0 = 100;

bounds.R_Stance.inputs.Control.u.lb = -100*ones(2,1);
bounds.R_Stance.inputs.Control.u.ub = 100*ones(2,1);
bounds.R_Stance.inputs.Control.u.x0 = zeros(2,1);

bounds.R_Stance.params.pRightToe.lb = -0*ones(3,1);
bounds.R_Stance.params.pRightToe.ub = 0*ones(3,1);
bounds.R_Stance.params.pRightToe.x0 = zeros(3,1);

bounds.R_Stance.params.atimevc.lb = -10*ones(6*2,1);
bounds.R_Stance.params.atimevc.ub = 10*ones(6*2,1);
bounds.R_Stance.params.atimevc.x0 = zeros(6*2,1);

bounds.R_Stance.params.ptimevc.lb = [bounds.R_Stance.time.tf.lb, bounds.R_Stance.time.t0.lb];
bounds.R_Stance.params.ptimevc.ub = [bounds.R_Stance.time.tf.ub, bounds.R_Stance.time.t0.ub];
bounds.R_Stance.params.ptimevc.x0 = [bounds.R_Stance.time.t0.x0, bounds.R_Stance.time.tf.x0];

bounds.R_Stance.time.kp = 100;
bounds.R_Stance.time.kd = 20;

% Right Impact
bounds.RightImpact = model_bounds;


