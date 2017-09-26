n=input('Put size: ');
disp('Put values into V: ');
for i=1:n
    V(i,1)=input('');
end
disp('Put values into I: ');
for i=1:n
    I(i,1)=input('');
end
for i=2:n
    for j=1:n-1
        I(j,i)=I(j+1,i-1)-I(j,i-1);
    end
    I(n-i+2,i)=0;
end
I
nV=input('Put V to find corresponding I: ');
h=V(2,1)-V(1,1);
p=(nV-V(1,1))/h;
cI=I(1,1)+p*I(1,2);
for i=3:n
    np=p;
    for j=1:i-2
        np=np*(p-j);
    end
    cI=cI+((np*I(1,i))/factorial(i-1));
end
fprintf('\n\n%.4f is the corresponding value for %f\n\n',cI,nV);