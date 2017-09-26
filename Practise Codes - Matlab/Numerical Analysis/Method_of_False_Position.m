f=input('Give the function: ');

a=0.0;
b=1.0;

while((f(a)<0&&f(b)<0)||(f(a)>0&&f(b)>0))
    a=a+1;
    b=b+1;
end

for i=1:7
    x=(a*f(b)-b*f(a))/(f(b)-f(a));
    if(c<f(x)) 
        a=x;
    else b=x;
    end
end

disp(x);