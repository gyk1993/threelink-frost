function disp = SetupthreelinkAnim(model)
    options = {'UseExported', true, 'ExportPath', 'gen/animation', 'SkipExporting', true};
    disp = frost.Animator.Display(model, options{:});
    
    rightFootSphere = frost.Animator.Sphere(disp.ax, model, model.ContactPoints.RightToe, 'rightFoot', options{:});
    rightFootSphere.radius = 0.02;
    leftFootSphere = frost.Animator.Sphere(disp.ax, model, model.ContactPoints.LeftToe, 'leftFoot', options{:});
    leftFootSphere.radius = 0.02;
    
    torsoSphere = frost.Animator.Sphere(disp.ax, model, model.OtherPoints.Torso, 'torso', options{:});
    torsoSphere.radius = 0.02;
    
    frame1 = model.ContactPoints.RightToe;
    frame2 = model.Links(2);
    rightFootLine = frost.Animator.Lines(disp.ax, model, frame1, frame2, 'rightFootLine', options{:});
    
    frame1 = model.ContactPoints.LeftToe;
    frame2 = model.Links(3);
    leftFootLine = frost.Animator.Lines(disp.ax, model, frame1, frame2, 'leftFootLine', options{:});
    
    frame1 = model.OtherPoints.Torso;
    frame2 = model.Links(1);
    torsoLine = frost.Animator.Lines(disp.ax, model, frame1, frame2, 'torsoLine', options{:});
    
    
    disp.addItem(rightFootSphere);
    disp.addItem(leftFootSphere);
    disp.addItem(rightFootLine);
    disp.addItem(leftFootLine);
    disp.addItem(torsoSphere);
    disp.addItem(torsoLine);
end
