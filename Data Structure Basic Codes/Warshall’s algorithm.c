#include<stdio.h>
int orr(int a, int b){
    if(a==0 && b==0) return(0);
    else return(1);
}
int nd(int a, int b){
    if(a==1 && b==1) return(1);
    else return(0);
}
int main(){
    int ar[100][100],p[100][100];
    int m,i,j,k;
    printf("Enter nodes: ");
    scanf("%d",&m);
    for(i=1;i<=m;i++)
        for(j=1;j<=m;j++)
            ar[i][j]=0;
    printf("Enter the Matrix:\n");
    for(i=1;i<=m;i++)
        for(j=1;j<=m;j++)
            scanf("%d",&ar[i][j]);
    for(i=1;i<=m;i++)
        for(j=1;j<=m;j++){
            if(ar[i][j]==0) p[i][j]=0;
            else p[i][j]=1;
        }
    for(k=1;k<=m;k++)
        for(i=1;i<=m;i++)
            for(j=1;j<=m;j++)
    p[i][j]=orr(nd(p[i][j],p[i][k]),p[k][j]);
    printf("\nPath matrix is:\n");
    for(i=1;i<=m;i++){
        printf("\n");
        for(j=1;j<=m;j++)
        printf("%d ",p[i][j]);
    }
    return 0;
}
