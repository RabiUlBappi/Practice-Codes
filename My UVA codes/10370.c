#include<stdio.h>
main()
{
    int m,i[1000],j,k,l;
    double n,avg,res,sum;
    scanf("%d",&m);
    while(m--)
    {
        avg=0.0;
        sum=0.0;
        k=0;
        scanf("%lf ",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d",&i[j]);
            sum+=i[j];
        }
        avg=sum/n;
        for(l=0;l<n;l++)
        {
            if(i[l]>avg)
                k++;
        }
        res=(k*100.0)/n;
        printf("%.3lf%%\n",res);
    }
    return 0;
}
