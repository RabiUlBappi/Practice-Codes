v=input('');
n=input('');
for i=1:n
   x(i)=input('');
   y(i)=input('');
end
h=x(1)-x(0);
p=(v-x(n-1))/h;
for i=1:n-1
    for j=1:n-i-1
        y(j)=y(j+1)-y(j);
    end
end
a=y(1);
h=2;
for i=2:n
    if  (i>2 || i<2)
        p=p*(p+i-1);
    end
    h=h*i;
    a=a+p*y(i)/h;
end
a