#include<stdio.h>
#include<math.h>
main()
{
    unsigned long long int bin,i=0,bin2,rem,oct=0;
    scanf("%llu",&bin);
    do{
        unsigned long long int k=0,dec=0;
        bin2=bin%1000;
        while(bin2!=0)
        {
            rem=bin2%10;
            dec+=rem*pow(2,k);
            bin2/=10;
            k++;
        }
        oct+=dec*pow(10,i);
        bin/=1000;
        i++;
    }while(bin!=0);
    printf("%llu",oct);
    return 0;
}
