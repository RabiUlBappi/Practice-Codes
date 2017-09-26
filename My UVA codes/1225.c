#include<stdio.h>
int main()
{
    int a[10],i,j,k,m,n,x,mod;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&x);
        for(k=0;k<10;k++)
            a[k]=0;
        for(i=1;i<=x;i++)
        {
            j=i;
            while(j!=0)
            {
                mod=j%10;
                a[mod]++;
                j/=10;
            }
        }
        for(m=0;m<10;m++)
        {
            if(m==9)
                printf("%d",a[m]);
            else
                printf("%d ",a[m]);
        }
        printf("\n");
    }
    return 0;
}
