#include<stdio.h>
main()
{
    int i=1,j,bin=0,dec;
    scanf("%d",&dec);
    while(dec!=0)
    {
        j=dec%2;
        dec/=2;//dec=dec/2
        bin+=j*i;//bin=bin+j*i
        i*=10;//i=i*10
    }
    printf("%d",bin);
    return 0;

}
