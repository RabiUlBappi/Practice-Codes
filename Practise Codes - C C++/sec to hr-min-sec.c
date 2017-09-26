#include<stdio.h>
main()
{
    int sec,mint,hr,d;
    scanf("%d",&sec);
    hr=sec/3600;
    mint=(sec-hr*3600)/60;
    sec=(sec-hr*60)%60;
    d=hr/24;
    printf("%d day %d hour %d minute %d seconds",d,hr,mint,sec);
}
