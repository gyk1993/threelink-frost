classdef ThreeLink < RobotLinks
    
    properties
        ContactPoints
        OtherPoints
    end
    
    methods
        function obj = ThreeLink(urdf)
            % Floating base model
            % base is a cell of structs including Name, joint Type and etc.
            base = get_base_dofs('planar');
            
            % Set base DOF limits
            limits = [base.Limit];
            [limits.lower] = deal(-10,-10,pi/4);
            [limits.upper] = deal(10,10,pi/4);
            [limits.velocity] = deal(20,20,20);
            [limits.effort] = deal(0);
            
            for i = 1:length(base)
                base(i).Limit = limits(i);
            end
            
            obj = obj@RobotLinks(urdf,base);
            
            %% define the contact frames
            
            right_leg_frame = obj.Joints(getJointIndices(obj,'q_right'));
            obj.ContactPoints.RightToe = CoordinateFrame(...
                'Name','RightToe',...
                'Reference',right_leg_frame,...
                'Offset',[0,0,1],...
                'R',[pi,0,0]...
                );
            
            left_leg_frame = obj.Joints(getJointIndices(obj,'q_left'));
            obj.ContactPoints.LeftToe = CoordinateFrame(...
                'Name','LeftToe',...
                'Reference',left_leg_frame,...
                'Offset',[0,0,1],...
                'R',[pi,0,0]...
                );
            
            %% define other frames
            torso_frame = obj.Joints(getJointIndices(obj,'BaseRotY'));
            obj.OtherPoints.Torso = CoordinateFrame(...
                'Name','Torso',...
                'Reference',torso_frame,...
                'Offset',[0,0,0.5],...
                'R',[0,0,0]...
                );
        end
        
        function ExportKinematics(obj, export_path)
            % Generates code for forward kinematics
            
            if ~exist(export_path,'dir')
                mkdir(export_path);
                addpath(export_path);
            end
            
            % Compute positions of all joints
            for i = 1:length(obj.Joints)
                position = obj.Joints(i).computeCartesianPosition;
                vars = obj.States.x;
                filename = [export_path, 'p_', obj.Joints(i).Name];
                export(position, 'Vars', vars, 'File', filename);
            end
            
            % Compute positions of contact points
            cp_fields = fields(obj.ContactPoints);
            for i = 1:length(cp_fields)
                position = obj.ContactPoints.(cp_fields{i}).computeCartesianPosition;
                vars = obj.States.x;
                filename = [export_path, 'p_', obj.ContactPoints.(cp_fields{i}).Name];
                export(position, 'Vars', vars, 'File', filename);
            end
            
            % Compute positions of other points
            op_fields = fields(obj.OtherPoints);
            for i = 1:length(op_fields)
                position = obj.OtherPoints.(op_fields{i}).computeCartesianPosition;
                vars = obj.States.x;
                filename = [export_path, 'p_', obj.OtherPoints.(op_fields{i}).Name];
                export(position, 'Vars', vars, 'File', filename);
            end    
        end       
    end   
end

