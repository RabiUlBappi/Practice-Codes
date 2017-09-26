clear
m=input('Enter martix dimension: ');
disp('Enter the matrix: ');
for i=1:m
    for j=1:m
        a(i,j)=input('');
    end
    b(i)=input('Enter the constant: ');
end
for i=1:m
    c=abs(a(i,i)); d=i;
    for j=i:m
        if abs(a(j,i))>c
            c=abs(a(j,i));
            d=j;
        end
    end
    if(c==0)
        break;
    end
    for j=1:m
        e=a(i,j);
        a(i,j)=a(d,j);
        a(d,j)=e;
    end
    e=b(i);
    b(i)=b(d);
    b(d)=e;
    c=a(i,i);
    e=(c-1)/c;
    for j=1:m
        a(i,j)=a(i,j)-e*a(i,j);
    end
    b(i)=b(i)-e*b(i);
    c=a(i,i);
    for j=1:m
        if(j==i)
            continue
        end
        d=a(j,i)/c;
        for k=1:m
            a(j,k)=a(j,k)-d*a(i,k);
        end
        b(j)=b(j)-d*b(i);
    end
    a
end
if (c==0)
    disp('Not Possible')
else    
    b
end