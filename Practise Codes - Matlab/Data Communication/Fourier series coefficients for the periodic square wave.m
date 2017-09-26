clear all;
t1=20;
t=4*t1;
w=(2*pi)/t;
j=1;
l=50;
for i=-l:l
    y(j)= (sin(i*w*t1))/(i*pi);
    if i==0
        y(j)=(2*t1)/t;
    end
    x(j) = i;
    j=j+1;
end
stem(x,y);