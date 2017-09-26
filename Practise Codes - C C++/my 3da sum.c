#include<stdio.h>
main()
{
    int a3d[3][3][3],i,j,k,x=1,sum=0;
    for(i=0;i<3;i++)
       for(j=0;j<3;j++)
           for(k=0;k<3;k++)
           {
               a3d[i][j][k]=(i+1)*(j+1)*(k+1);
               printf("%d",a3d[i][j][k]);
           }
           for(i=0;i<3;i++)
             for(j=0;j<3;j++)
               for(k=0;k<3;k++)
            printf("Sum of 3d array is: %d\n",sum);
    return 0;
}
