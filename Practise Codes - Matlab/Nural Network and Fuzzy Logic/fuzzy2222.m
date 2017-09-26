clear all 
close all 
clc

A = input('input array A \n');
B = input('input array B \n');

[n,m] = size(A);
[p,q] = size(B);

t = 0;
max_min = [];
for k = 1:1:n
    for i = 1:1:q
        max = 0;
        for j = 1:1:n
        t = min( A(k,j), B(j,i) );
        if (t>max)
            max = t;
        end
        end
        max_min(k,i) = max;
    end
end
max_min

t = 0;
max_pro = [];
for k = 1:1:n
    for i = 1:1:q
        max = 0;
        for j = 1:1:n
        t = ( A(k,j) * B(j,i) );
        if (t>max)
            max = t;
        end
        end
        max_pro(k,i) = max;
    end
end
max_pro

t = 0;
max_avg = [];
for k = 1:1:n
    for i = 1:1:q
        max = 0;
        for j = 1:1:n
        t = 0.5 * ( A(k,j) + B(j,i) );
        if (t>max)
            max = t;
        end
        end
        max_avg(k,i) = max;
    end
end
max_avg