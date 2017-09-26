clear all;
n=input('\n\nEnter table length: ');
fprintf('Enter the table:\n');
disp('x:');
for i=1:n
    x(i)=input('');
end
disp('y:');
for i=1:n
    y(i)=input('');
end
sumx=0.0;
sumy=0.0;
sumx2=0.0;
sumxy=0.0;
fprintf('\n\n');
for i=1:4
    sum(i)=0.0;
end
for i=1:n
    restable(i,1)=x(i);
    restable(i,2)=y(i);
    restable(i,3)=x(i)*x(i);
    restable(i,4)=x(i)*y(i);
    sum(1)=sum(1)+x(i);
    sum(2)=sum(2)+y(i);
    sum(3)=sum(3)+restable(i,3);
    sum(4)=sum(4)+restable(i,4);
    fprintf('   %.2f      %.2f      %.2f      %.2f\n', restable(i,1),restable(i,2),restable(i,3),restable(i,4) );
end
fprintf('\nsum=    %.2f     %.2f     %.2f     %.2f\n',sum(1),sum(2),sum(3),sum(4));
fprintf('\nThe normal equestions are:\n    %.2f=%.2fa+%.2fb\n    %.2f=%.2fa+%.2fb\n',sum(4),sum(3),sum(1),sum(2),sum(1),n);
a=-1*(sum(3)*n-sum(1)*sum(1));
c=(sum(1)*sum(2)-n*sum(4))/a;
d=(sum(4)*sum(1)-sum(3)*sum(2))/a;
fprintf('c=%.4f, d=%.4f',c,d);
if(d>=0) sign='+';
else sign='';
end
fprintf('\nThe straight line equestion is: y=%.4fx',c);
if(d>0||d<0)
    fprintf(sign);
    fprintf('%.4f\n\n',d);
end
for i=1:n
    f(i)=c*x(i)+d;
end
fprintf('\n');
figure(1);
hold on;
plot(x,y,'b:',x,y,'ks');
plot(x,f,'r--',x,f,'rh');
