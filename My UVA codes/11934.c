#include<stdio.h>
main()
{
    long long int a,b,c,d,l,j,n,sum;
    while(1)
    {
        scanf("%lld%lld%lld%lld%lld",&a,&b,&c,&d,&l);
        if(a==0&&b==0&&c==0&&d==0&&l==0)
            break;
        j=0;
        for(n=0;n<=l;n++)
        {
            sum=0;
            sum+=((a*n*n)+(b*n)+c);
            if(sum%d==0)
                j++;
        }
        printf("%d\n",j);
    }
    return 0;
}
