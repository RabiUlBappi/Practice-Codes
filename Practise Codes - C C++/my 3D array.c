#include<stdio.h>
main()
{
    int a3d[3][3][3],i,j,k,x=1,sum=0;
    printf("Enter 3D array's numbers: ");
    for(i=0;i<3;i++)
       for(j=0;j<3;j++)
           for(k=0;k<3;k++)
           {
               a3d[i][j][k]=x;
               x++;
               printf("%d\n",a3d[i][j][k]);
           }
    return 0;
}
