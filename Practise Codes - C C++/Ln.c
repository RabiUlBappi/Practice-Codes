#include<stdio.h>
#include<math.h>
void main()
{
    int i;
    double x,x1,lnx=0.0;
    printf("ln ");
    scanf("%lf",&x1);
    if(x1<=0)
        printf("\n\nMath ERROR\n\n");
    else
    {
        x=(x1-1)/(x1+1);
        for(i=1;i<=1000;i+=2)
        {
            lnx+=2*pow(x,i)/i;
        }
        printf("= %.10lf",lnx);
    }

}
