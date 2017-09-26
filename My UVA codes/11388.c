#include<stdio.h>
/*int gcd(int a,int b)
{
    if(a%b==0)
        return b;
    else
        return gcd(b,a%b);
}
main()
{
    int i,j,n,r1=0,r2=0;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d",&i,&j);
        r1=gcd(i,j);
        r2=(i*j)/gcd(i,j);
        if(r1==i&&r2==j)
            printf("%d %d\n",r1,r2);
        else printf("%d\n",-1);
    }
}*/


main()
{
    int i,j,n,r1=0,r2=0;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d",&i,&j);
        if(j%i==0)
           printf("%d %d\n",i,j);
        else printf("%d\n",-1);
    }
    return 0;
}
