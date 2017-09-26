#include<stdio.h>
#include<math.h>
main()
{
    double mind,maxd,res;
    int x,y,r,t;
    scanf("%d",&t);
    while(t--)
    {

        mind=maxd=res=0.0;
        scanf("%d%d%d",&x,&y,&r);
        res=sqrt(x*x+y*y);
        mind=r-res;
        maxd=r+res;
        printf("%.2lf %.2lf\n",mind,maxd);
    }
    return 0;
}
