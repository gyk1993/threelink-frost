clear
load('1_mat.mat')
x1=states{1}.x;
load('2_mat.mat')
x2=states{1}.x;

figure
hold on
plot(1:21,x1(3,:))
plot(1:21,-x2(3,:))
hold off