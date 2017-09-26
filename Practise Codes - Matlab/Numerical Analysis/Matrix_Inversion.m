%A=[
%    3  1  2
%    2 -3 -1
%   1  2  1 ];
%B=[  3
%    -3
%     4 ];
disp('Put the matrix: ');
for r = 1:3
    for s = 1:3
        A(r,s)=input('');
    end
    B(r,1)=input('Enter d: ');
end

 a(1,1) = (A(2,2)*A(3,3))-(A(2,3)*A(3,2));
 a(1,2) = (A(2,1)*A(3,3))-(A(2,3)*A(3,1));
 a(1,3) = (A(2,1)*A(3,2))-(A(2,2)*A(3,1));
 a(2,1) = (A(1,2)*A(3,3))-(A(1,3)*A(3,2));
 a(2,2) = (A(1,1)*A(3,3))-(A(1,3)*A(3,1));
 a(2,3) = (A(1,1)*A(3,2))-(A(1,2)*A(3,1));
 a(3,1) = (A(1,2)*A(2,3))-(A(1,3)*A(2,2));
 a(3,2) = (A(1,1)*A(2,3))-(A(1,3)*A(2,1));
 a(3,3) = (A(1,1)*A(2,2))-(A(1,2)*A(2,1));

 
 a


diag=0;
for i=1:3
    for j=1:3
        if(diag==0)
            adjA(j,i)=a(i,j);
            diag=1;
        else
            a(i,j)=(-1)*a(i,j);
            adjA(j,i)=a(i,j);
            diag=0;
        end
    end
end


adjA


det=A(1,1)*a(1,1)+A(1,2)*a(1,2)+A(1,3)*a(1,3)


format rat
invA=adjA/det


X=invA*B
