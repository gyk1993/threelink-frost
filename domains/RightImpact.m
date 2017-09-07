function guard = RightImpact(src_domain, tar_domain)
    % set impact
    guard = RigidImpact('RightImpact', src_domain, 'leftFootHeight');

    % Relabeling Matrix
    guard.R = guard.R(:,[1:3,5,4]);

    % set the impact constraint
    guard.addImpactConstraint(struct2array(tar_domain.HolonomicConstraints));
end
