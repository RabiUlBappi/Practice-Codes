#include<stdio.h>
main()
{
    int i,fact=1;
    for(i=1;i<=6;i++)
        fact=i*fact;
    printf("%d",fact);
}
