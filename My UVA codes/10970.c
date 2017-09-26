#include<stdio.h>
main()
{
    int m,n;
    while(scanf("%d%d",&m,&n)==2)
    {
        printf("%d\n",((m-1)+m*(n-1)));
    }
    return 0;
}
