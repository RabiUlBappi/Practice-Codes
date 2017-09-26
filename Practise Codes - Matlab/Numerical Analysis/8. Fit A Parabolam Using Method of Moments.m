clear all;
n=input('Length: ');
disp('X:');
for i=1:n
    X(i)=input('');
end
disp('Y:');
for i=1:n
    Y(i)=input('');
end
sy=0;
sxy=0;
sxxy=0;
for i=1:n
    sy=sy+Y(i);
    sxy=sxy+X(i)*Y(i);
    sxxy=sxxy+X(i)*X(i)*Y(i);
end
h=X(2)-X(1);
low=X(1)-h/2;
high=X(n)+h/2;
mu1=h*sy;
mu2=h*sxy;
mu3=h*sxxy;
fprintf('h=%.2f, low=%.2f, high=%.2f\n',h,low,high);
fprintf('mu1=%.4f, mu2=%.4f, mu3=%.4f\n',mu1,mu2,mu3);
f=@(x)a+b*x+c*x*x;
syms x a b c; 
fx=sym(f);
z1=int(fx,low,high)- mu1;
z2=int(x*fx,low,high)- mu2;
z3=int(x*x*fx,low,high)- mu3;
Z=solve(z1,z2,z3,c,b,a);
c= vpa(Z.c);
b= vpa(Z.b);
a= vpa(Z.a);
fy=a+b*x+c*x*x
for i=1:n
    arr(i)=a+b*X(i)+c*X(i)*X(i);
end
figure(1);
hold on;
plot(X,Y,'b:',X,Y,'ks');
plot(X,arr,'--rs','LineWidth',2,...
                'MarkerEdgeColor','k',...
                'MarkerFaceColor','g',...
                'MarkerSize',10)
