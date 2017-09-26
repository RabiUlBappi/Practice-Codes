#include<stdio.h>
main()
{
    int i,j,k=1,l,c[3],t;
    scanf("%d",&j);
    while(j--)
    {
        for(i=0;i<3;i++)
            scanf("%d",&c[i]);
        for(i=0;i<=2;i++)
            for(l=0;l<2-i;l++)
        {
            if(c[l]>c[l+1])
            {
                t=c[l];
                c[l]=c[l+1];
                c[l+1]=t;
            }
        }
        printf("Case %d: %d\n",k,c[1]);
        k++;
    }
    return 0;
}

