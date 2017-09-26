#include<stdio.h>
main()
{
    long long unsigned i,i1,j,m,n,sum;
    while(scanf("%llu",&j)==1)
    {
        n=0;
        sum=0;
        for(i1=1;i1<j;i1+=2)
        sum+=i1;
        m=(1+(sum*2));
        for(i=1;i<=3;i++)
            n+=(m+((j-i)*2));
        printf("%llu\n",n);
    }
    return 0;
}
/*

#include <stdio.h>
#include <math.h>

int main()
{
long long int y, t, i, j, k, l, z, a, d, n, sum;
double x;

while (scanf("%lld", &n) == 1)
{
x = ( (n - 1) / 2.0);
y = (x / 2.0) * (12.0 + ( (x - 1) * (4.0) ) );
sum = (3 * y) - 3;
printf("%lld\n", sum);
}
return 0;
}
*/
