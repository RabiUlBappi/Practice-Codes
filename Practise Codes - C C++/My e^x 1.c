#include<stdio.h>
main()
{
    int i,n;
    char x;
    scanf("%d",&n);
    printf("e^x=1+x+");
    for(i=2;i<=n;i++)
    printf("x^%d/%d!+",i,i);
    printf(".............+x^n/n!");
    return 0;
}
