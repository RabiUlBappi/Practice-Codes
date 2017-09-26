f=input('Give the function: ');
%sf=input('Give the simplied function: ');

a=0.0;
b=1.0;

while((f(a)<0&&f(b)<0)||(f(a)>0&&f(b)>0))
    a=a+1;
    b=b+1;
end

x=(a+b)/2;
for i=1:16
    x=1/sqrt(x+1); %the simplied function
end

disp('Answer'+x);