#include<stdio.h>
int main()
{
    int npr,ncr,n,r,i,j=1,k=1,l=1;
    printf("Enter the Value of n:");
    scanf("%d",&n);
    printf("Enter the Value of r:");
    scanf("%d",&r);
    for(i=1;i<=n;i++)
         j=i*j;
    for(i=1;i<=(n-r);i++)
         k=i*k;
    for(i=1;i<=r;i++)
         l=i*l;
    npr=j/k;
    printf("nPr = %d\n",npr);
    ncr=j/(k*l);
    printf("nCr = %d\n",ncr);
    return 0;
}
