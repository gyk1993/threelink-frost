function right_stance_constraints(nlp, bounds, varargin)

    domain = nlp.Plant;
    
    % relative degree 2 outputs
    domain.VirtualConstraints.timevc.imposeNLPConstraint(nlp, [bounds.time.kp, bounds.time.kd], [1,1]);
    
    % tau boundary [0,1]
    T_name = lower(nlp.OptVarTable.T(1).Name);
    T = SymVariable(T_name,[nlp.OptVarTable.T(1).Dimension,1]);
    p_name = lower(nlp.OptVarTable.ptimevc(1).Name);
    p = SymVariable(p_name,[nlp.OptVarTable.ptimevc(1).Dimension,1])
    tau_0 = SymFunction(['tau_0_',domain.Name],T(1)-p(2),{T,p});
    tau_F = SymFunction(['tau_F_',domain.Name],T(2)-p(1),{T,p});
    addNodeConstraint(nlp, tau_0, {'T',p_name}, 'first', 0,0, 'Linear');
    addNodeConstraint(nlp, tau_F, {'T',p_name}, 'last', 0, 0, 'Linear');
    
    
    % output boundary
    y_pos = domain.VirtualConstraints.timevc;
    y_bound_idx = str_indices({'q_right','q_left'}, y_pos.OutputLabel);
    
    y_bound = y_pos.ActualOutput(y_bound_idx);
    lb = [-2*pi,-2*pi]';
    ub = [2*pi,2*pi]';
    y_bound_fun = SymFunction(['output_boundary_',domain.Name], y_bound, {domain.States.x});
    addNodeConstraint(nlp, y_bound_fun, {'x'}, 'all', lb, ub, 'Linear');
    
    % average velocity
    velocity_desired =0.8;
    DOF = 7;
    T = SymVariable('t',[nlp.OptVarTable.T(1).Dimension,1]);
    X0 = SymVariable('x0',[nlp.OptVarTable.x(1).Dimension,1]);
    XF = SymVariable('xF',[nlp.OptVarTable.x(1).Dimension,1]);
    v_des = SymVariable('vdes');
    avg_vel = (XF(1) - X0(1))/(T(2)-T(1))-v_des;
    avg_vel_fun = SymFunction('average_velocity_a', avg_vel, {T,X0,XF},{v_des});
    
    avg_vel_cstr = NlpFunction('Name','average_velocity_b',...
        'Dimension',1,...
        'lb', 0,...
        'ub', 0,...
        'Type','Nonlinear',...
        'SymFun',avg_vel_fun,...
        'DepVariables',[nlp.OptVarTable.T(1); nlp.OptVarTable.x(1); nlp.OptVarTable.x(end)],...
        'AuxData',velocity_desired);
  
    addConstraint(nlp, 'average_velocity_c', 'last', avg_vel_cstr);
    
    % Swing Foot should be 0 at last node
    X = SymVariable('x',[nlp.OptVarTable.x(1).Dimension,1]);
    swingFootHeight = SymFunction('swing_foot_height', nlp.Plant.EventFuncs.leftFootHeight.ConstrExpr, {X});
    addNodeConstraint(nlp, swingFootHeight,{'x'}, 'last', 0, 0, 'Nonlinear');
    
    % swing leg retraction
    
    dX = SymVariable('x',[nlp.OptVarTable.dx(1).Dimension,1]);
    SwingFootRetraction = SymFunction('swing_foot_retraction', dX(3)+dX(5),{dX});
    addNodeConstraint(nlp, SwingFootRetraction,{'dx'}, 'last', min(0.5*velocity_desired,4*velocity_desired), max(0.5*velocity_desired,4*velocity_desired), 'Linear');
    
    
    
    % Swing Foot Clearance
%     X = SymVariable('x',[nlp.OptVarTable.x(1).Dimension,1]);
%     swingFootHeight = SymFunction('swing_foot_height', nlp.Plant.EventFuncs.leftFootHeight.ConstrExpr, {X});
%     addNodeConstraint(nlp, swingFootHeight,{'x'}, floor(nlp.NumNode/2), 0.1, Inf, 'Nonlinear');
end

