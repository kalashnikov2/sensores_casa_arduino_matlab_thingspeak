load('clown.mat')
figure(1)
    surf(X','LineStyle','None','FaceColor','Interp');
    colormap gray;

theta=linspace(0,2*pi,100);
el=90*cos(theta);
for a1=1:numel(el)
    figure(1)
        view(44-1/4*el(a1),el(a1))
        drawnow;
        pause(0.1)
end    