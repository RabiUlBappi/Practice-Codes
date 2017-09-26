close all; 
clear all;
clc
x = (0: 0.1 : 10);
params1 = [2 5 7 9];
params2 = [1 3 5 7];

y1 = trimf(x, params1);
y2 = gaussmf(x, params2);

u1 = max(y1, y2);
u2 = min(y1, y2);
complement1 = 1- y1;
complement2 = 1- y2;

subplot(7,1,1);
plot(x,y1,'color','r','linewidth',2);
hold on
plot(x,y2,'linewidth',2);
set(gcf, 'name', 'Union, Intersection, Complement of Gaussian & Triangular Membership function ','numbertitle', 'off');
title(['\fontsize{10}Fig 1: {\color{blue}Gaussian }& '...
' {\color{red}Triangle} membership function'])

subplot(7,1,2);
plot(x,u1,'color','m','linewidth',2);
title('\fontsize{10}Fig 2: {\color{magenta}Union } of membership functions')

subplot(7,1,3);
plot(x,u2,'color','g','linewidth',2);
title('\fontsize{10}Fig 3: {\color{Green}Intersection } of membership functions')

subplot(7,1,4);
plot(x,y1,'linewidth',2);
title('\fontsize{10}Fig 4: Triangle membership functions')

subplot(7,1,5);
plot(x,complement1,'linewidth',2);
title('\fontsize{10}Fig 5: Complement of Triangle membership functions')

subplot(7,1,6);
plot(x,y2, 'linewidth',2);
title('\fontsize{10}Fig 6: Gaussian membership functions')

subplot(7,1,7);
plot(x,complement2,'linewidth',2);
title('\fontsize{10}Fig 7: Complement of Gaussian membership functions')

xlabel('universe of discourse')
ylabel('membership degree')

