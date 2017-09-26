#include<stdio.h>
int factorial(int i)
{
    int j,fact=1;
    for(j=1;j<=i;j++)
    {
       fact=fact*j;
    }

    return fact;
}
main()
{
    int i,sum=0,fact=1;
    for(i=1;i<=9;i++)
    {
      fact=factorial(i);
      sum=sum+fact;

    }
 printf("%d",sum);
}
