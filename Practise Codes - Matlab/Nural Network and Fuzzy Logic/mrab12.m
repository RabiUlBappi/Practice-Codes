close all;
clear all;
clc;
x=(0:0.1:10)';

param1=[2,3,7,9];
y1 = trapmf(x,param1);

param2=[1,10,12];
y2 = trimf(x,param2);

union = max(y1,y2);

%subplot(3,1,1), plot(x,y1,'linewidth',2);
%subplot(3,1,2), plot(x,y2,'linewidth',2);
%subplot(3,1,3), 
plot(x,union,'linewidth',2);

axis([0 10 -0.1 1.1]);
xlabel('universe of discourse');
ylabel('membership degree');
set(gcf, 'name', 'Trapezoidal membership function', 'numbertitle', 'off');