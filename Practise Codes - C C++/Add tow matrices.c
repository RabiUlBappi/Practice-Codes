#include<stdio.h>
main()
{
    int i,j,a1[2][2],a2[2][2],sum[2][2];
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
          scanf("%d",&a1[i][j]);
    for(i=0;i<2;i++)
         for(j=0;j<2;j++)
          scanf("%d",&a2[i][j]);
    printf("New matrix is:\n\n");
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
        {
             sum[i][j]=a1[i][j]+a2[i][j];
             printf(" %d",sum[i][j]);
             if(j==1)
             printf("\n\n");
        }

    return 0;
}
