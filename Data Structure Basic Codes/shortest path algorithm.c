#include<stdio.h>
#define minn(p,q) p<q?p:q

int main(){
    int w[100][100],q[100][100];
    int m,i,j,k,a;

    printf("Enter nodes: ");
    scanf("%d",&m);
    for(i=1;i<=m;i++)
        for(j=1;j<=m;j++)
            w[i][j]=0;
    printf("Enter the Matrix:\n");
    for(i=1;i<=m;i++)
        for(j=1;j<=m;j++)
            scanf("%d",&w[i][j]);

    for(i=1;i<=m;i++)
        for(j=1;j<=m;j++) {
            if(w[i][j]==0) q[i][j]=9999;
            else q[i][j]=w[i][j];
        }
    for(k=1;k<=m;k++)
        for(i=1;i<=m;i++)
            for(j=1;j<=m;j++)
                q[i][j]=minn(q[i][j],q[i][k]+q[k][j]);
    printf("\nShortest path matrix is:\n");
    for(i=1;i<=m;i++) {
        printf("\n");
        for(j=1;j<=m;j++)
        printf("%d ",q[i][j]);
    }

    return 0;
}
