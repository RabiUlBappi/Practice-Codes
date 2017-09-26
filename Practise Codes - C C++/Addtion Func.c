#include<stdio.h>
double mul(double a, double b)
{
    return a-b;
}
main()
{
    double x,y,res;
    scanf("%lf",&x);
    scanf("%lf",&y);
    res = mul(x,y);
    printf("%lf",res);
    return 0;
}
