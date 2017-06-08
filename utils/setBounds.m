%% Set bounds for optimization problem

% Set Bounds 
model_bounds = rabbit.getLimits();
model_bounds.states.x.lb = [ -10, 0.75, -pi/8, 1, 1];
model_bounds.states.x.ub = [10, 10, pi/8, 5, 5];
model_bounds.states.dx.lb = -100*ones(1,5);
model_bounds.states.dx.ub = 100*ones(1,5);
bounds = struct();

% Right Stance
bounds.RightStance = model_bounds;
bounds.RIghtStance.time.t0.lb = 0;
bounds.RightStance.time.t0.ub = 0;
bounds.RightStance.time.t0.x0 = 0;

bounds.RightStance.time.tf.lb = 0.2;
bounds.RightStance.time.tf.ub = 1;
bounds.RightStance.time.tf.x0 = 1;

bounds.RightStance.time.duration.lb = 0.2;
bounds.RightStance.time.duration.ub = 1;
bounds.RightStance.time.duration.x0 = 1;

bounds.RightStance.inputs.ConstraintWrench.fRightToe.lb = -10000;
bounds.RightStance.inputs.ConstraintWrench.fRightToe.ub = 10000;
bounds.RightStance.inputs.ConstraintWrench.fRightToe.x0 = 100;

bounds.RightStance.inputs.Control.u.lb = -100*ones(2,1);
bounds.RightStance.inputs.Control.u.ub = 100*ones(2,1);
bounds.RightStance.inputs.Control.u.x0 = zeros(2,1);

bounds.RightStance.params.pRightToe.lb = -0*ones(3,1);
bounds.RightStance.params.pRightToe.ub = 0*ones(3,1);
bounds.RightStance.params.pRightToe.x0 = zeros(3,1);

bounds.RightStance.params.atime.lb = -10*ones(6*4,1);
bounds.RightStance.params.atime.ub = 10*ones(6*4,1);
bounds.RightStance.params.atime.x0 = zeros(6*4,1);

bounds.RightStance.params.ptime.lb = [bounds.RightStance.time.tf.lb, bounds.RightStance.time.t0.lb];
bounds.RightStance.params.ptime.ub = [bounds.RightStance.time.tf.ub, bounds.RightStance.time.t0.ub];
bounds.RightStance.params.ptime.x0 = [bounds.RightStance.time.t0.x0, bounds.RightStance.time.tf.x0];

bounds.RightStance.time.kp = 100;
bounds.RightStance.time.kd = 20;

% Right Impact
bounds.RightImpact = model_bounds;


