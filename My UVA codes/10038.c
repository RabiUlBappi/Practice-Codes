#include"stdio.h"
int main()
{
    int n,a[4000],r[4000],i,j,k,m,t;
    while(scanf("%d",&n)==1)
    {
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(k=0;k<n-1;k++)
            r[k]=abs(a[k+1]-a[k]);
        for(i=1;i<n-1;i++)
        for(j=n-2;j>=i;j--)
            if(r[j-1]>r[j])
            {
                t=r[j-1];
                r[j-1]=r[j];
                r[j]=t;
            }
        m=0;
        for(i=0;i<n-1;i++)
        {
            if(r[i]==i+1)
                continue;
            else
            {
                m=1;
                break;
            }
        }
        if(m==0)
            printf("Jolly\n");
        else
            printf("Not jolly\n");
    }
    return 0;
}
