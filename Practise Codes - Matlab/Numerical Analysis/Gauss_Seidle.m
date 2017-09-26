disp('Put the matrix: ');
for r = 1:3
    for s = 1:3
        a(r,s)=input('');
    end
    d(r,1)=input('Enter d: ');
end

c=0.0001;
prevx=0;
prevy=0;
prevz=0;
count=0;
while(1)
    x=(d(1,1)-a(1,2)*prevy-a(1,3)*prevz)/a(1,1);
    prevx=x;
    y=(d(2,1)-a(2,1)*prevx-a(2,3)*prevz)/a(2,2);
    prevy=y;
    z=(d(3,1)-a(3,1)*prevx-a(3,2)*prevy)/a(3,3);
    if(abs(x-prevx)<c && abs(y-prevy)<c && abs(z-prevz)<c)
        break;
    end
    prevx=x;
    prevy=y;
    prevz=z;
    count=count+1;
end
x
y
z   

disp('Number of iterations:',count);