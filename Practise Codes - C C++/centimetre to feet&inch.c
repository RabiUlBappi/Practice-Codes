#include<stdio.h>
main()
{
    int ft;
    float cent,inch;
    scanf("%f",&cent);
    ft=cent/(2.54*12);
    inch=(cent-ft*2.54*12)/2.54;
    printf("%d feet %.1f inches",ft,inch);
}
