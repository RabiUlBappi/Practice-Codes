/*#include<stdio.h>
int tn(int n)
{
    int j=0,k=0;
    while(1)
    {
       go:k++;
       if(n==1)
           break;
       else if(n%2==1)
           n=(n*3+1);
       else
           n/=2;
       goto go;
    }
    return k;
}
main()
{
    int n1,n2,i,j,k,m,a[100000];
    while(scanf("%d%d",&n1,&n2)==2)
    {
        for(j=n1,k=0;j<=n2;j++,k++)
            a[k]=tn(j);
        m=a[0];
        for(i=1;i<k;i++)
        {
            if(a[i]>m)
                m=a[i];
        }
        printf("%ld\n",m);
    }
    return 0;
}*/
#include<stdio.h>
main()
{
    unsigned n,n1,n2,n3,n4,i,j,k,m;
    while(scanf("%u%u",&n3,&n4)==2)
    {
        if(n3<n4)
        {
            n1=n3;
            n2=n4;
        }
        else
        {
            n1=n4;
            n2=n3;
        }
        m=0;
        while(n1<=n2)
        {
            k=1;
            n=n1;
            while(n!=1)
            {
               if(n%2==1)
                 n=(n*3+1);
               else
                 n/=2;
               k++;
            }
            if(k>m)
                m=k;
            n1++;
        }
        printf("%u %u %u\n",n3,n4,m);
    }
    return 0;
}
