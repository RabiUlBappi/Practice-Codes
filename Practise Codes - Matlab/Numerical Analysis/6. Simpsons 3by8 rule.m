fprintf('\n\n');
fun=input('Put the function as (@(x)function): ');
upper=input('Upper Limit: ');
lower=input('Lower Limit: ');
h=input('h: ');
diff=(upper-lower)/h; 
x=0;
fprintf('|\n');
for i=1:diff
    x=x+h;
    y(i)=fun(x);
    fprintf('%.8f\n|\n',y(i));
end
part1=0.0;
part2=0.0;
part3=0.0;

for i=1:diff
    if(i==diff)
        part1=fun(0)+y(i);
    elseif(mod(i,3)==0)
        part3=part3+(2*y(i));
    else
        part2=part2+(3*y(i));
    end
end
ans=3*h*(part1+part2+part3)/8;
fprintf('Answer Using Simpsons 3/8 Rule: %.8f\n',ans);

