#include<stdio.h>
main()
{
    int a,b,x,y,i,j;
    scanf("%d%d",&a,&b);
    x=a;
    y=b;
    /*while(a!=b)
    {
        if(a>b)
            a=a-b;
        else
            b=b-a;
    }
    printf("LCM is %d",x*y/a);*/
    while(x>y)
    {
        i=y%x;
        j=x%i;

    }
    printf("%d",j);
}
