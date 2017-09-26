#include<stdio.h>
unsigned tn(unsigned n)
{
    int j=0,k=1;
    while(n!=1)
    {
        if(n%2==1)
           n=(n*3+1);
        else
           n/=2;
           k++;
    }
    return k;
}
main()
{
    unsigned n,n1,n2,n3,n4,j,m;
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
        m=tn(n1);
        for(j=n1+1;j<=n2;j++)
        {
            n=tn(j);
            if(n>m)
            m=n;
        }
        printf("%u %u %u\n",n3,n4,m);
    }
    return 0;
}

