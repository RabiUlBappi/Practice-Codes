#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter Three Numbers:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
        printf("Maximum Number a= %d\n",a);
    else if(b>c&&b>a)
     printf("Maximum Number b= %d\n",b);
    else
     printf("Maximum Number c= %d\n",c);
     return 0;
}
