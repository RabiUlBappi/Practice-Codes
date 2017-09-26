f=input('Give the function: ');

a=0.0;
b=1.0;

while((f(a)<0&&f(b)<0)||(f(a)>0&&f(b)>0))
    a=a+1;
    b=b+1;
end

for i=1:7
    x=b+((b-a)*f(b))/(f(a)-f(b));
    a=b;
    b=x;
end

disp(x);