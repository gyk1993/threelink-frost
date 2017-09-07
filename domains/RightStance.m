function domain = RightStance(model)
%UNTITLED Summary of this function goes here
%   Detailed explanation goes here

domain = copy(model);

domain.setName('Right_Stance');

x = domain.States.x;
dx = domain.States.dx;


% add contact
right_sole = ToContactFrame(domain.ContactPoints.RightToe,...
    'PointContactWithFriction');
fric_coef.mu = 0.6;
domain = addContact(domain,right_sole,fric_coef);

% add event
p_nsf = getCartesianPosition(domain, domain.ContactPoints.LeftToe);
h_nsf = UnilateralConstraint(domain,p_nsf(3),'leftFootHeight','x');
domain = addEvent(domain, h_nsf);

% phase variable: time
t = SymVariable('t');
p = SymVariable('p',[2,1]);
tau = (t-p(2))/(p(1)-p(2));


% relative degree two outputs:
y_1 = x('q_right');
y_2 = x('q_left');

ya_2=[y_1;y_2];

y2_label = {'q_right',...
            'q_left'};
        
y2 = VirtualConstraint(domain,ya_2,'timevc','DesiredType','Bezier','PolyDegree',5,...
    'RelativeDegree',2,'OutputLabel',{y2_label},'PhaseType','TimeBased',...
    'PhaseVariable',tau,'PhaseParams',p,'Holonomic',true);

domain = addVirtualConstraint(domain,y2);


end

