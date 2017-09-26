clear all;
f=input('Give the function as @(x)function: ');
syms x;
fx=f(x);
dfx=diff(fx);
a=0;
k=-1;l=-1;
while((k<0&&l<0) || (k>0&&l>0))
   k=subs(fx,x,a);
   l=subs(fx,x,a+1);
   a=a+1;
end
b=a;
a=a-1;
cont=0;
z=a+(b/10);
prevz=1;
z
while(abs(z-prevz)>1e-8)
    z=z-subs(fx,x,z)/subs(dfx,x,z);
    prevz=z;
end
double(z)