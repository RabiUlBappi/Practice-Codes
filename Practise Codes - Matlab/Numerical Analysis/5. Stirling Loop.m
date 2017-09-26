clear all;
disp('Put size: ');
n=input('');
disp('Put values into X: ');
for i=1:n
    X(i,1)=input('');
end
disp('Put values into Yp: ');
for i=1:n
    Yp(i,1)=input('');
end
for i=2:n
    for j=1:n-1
        Yp(j,i)=Yp(j+1,i-1)-Yp(j,i-1);
    end
    Yp(n-i+2,i)=0;
end
Yp
x=input('Put X to find corresponding Y: ');
mid=int16(fix(n/2));
X0=X(mid+1,1);
h=X(2,1)-X(1,1);
p=(x-X0)/h;
y0=Yp(mid+1,1);
i=1;
j=1;
k=n;
while(i<=n)
    if(mod(i,2))
        delY(i,1)=Yp(int16(fix(k/2))+1,j);
        delY(i,2)=0;
    else
        delY(i,1)=Yp(int16(fix(k/2)),j);
        delY(i,2)=Yp(int16(fix(k/2))+1,j);
    end
    i=i+1;
    j=j+1;
    k=k-1;
end
delY
ansYp=0;
j=0;
sp=1;
var_p(1,1)=1;  var_p(2,1)=p;  var_p(3,1)=p*p;
var_p(4,1)=p*(p*p-1);  var_p(5,1)=p*p*(p*p-1);
for i=1:n
    if(mod(i,2)==0)
        mean=(delY(i,1)+delY(i,2))/2;
    else
        mean=delY(i,1);
    end
    ansYp=ansYp+mean*var_p(i)/factorial(j);
    j=j+1;
end
ansYp