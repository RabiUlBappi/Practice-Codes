#include<stdio.h>
main()
{
    long long int t,n,k;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        k=(((((n*567)/9)+7492)*235)/47)-498;
        if(k<0)
            k*=-1;
        k=(k/10)%10;
        printf("%lld\n",k);
    }
    return 0;
}
