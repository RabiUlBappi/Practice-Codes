#include<stdio.h>
main()
{
    int i,j=1,k,n;
    printf("Enter the number of rows of floyd's triangle: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=i;k++)
        {
            printf("%d",j);
            j++;
        }

          printf("\n");
    }
    return 0;
}
