#include<stdio.h>
main()
{
    int i,j,ara[100],m;
    for(i=0;i<5;i++)
    scanf("%d",&ara[i]);
    m=ara[0];
    for(i=1;i<5;i++)
    {
        if(ara[i]>m)
        m=ara[i];
    }
    printf("%d ",m);

    return 0;
}
