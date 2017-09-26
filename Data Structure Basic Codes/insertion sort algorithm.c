#include<stdio.h>
#define inf 100000
void INSERTION(int A[],int N);
int main()
{
    int N,A[100];
    scanf("%d",&N);
    for(int i=1;i<=N;i++)
    {
        scanf("%d",&A[i]);
    }
    INSERTION(A,N);
    for(int i=1;i<=N;i++)
    {
        printf("%d ",A[i]);
    }
}
void INSERTION(int A[],int N)
{
    int TEMP,PTR;
    A[0]=-inf;
    for(int K=1;K<=N;K++)
    {
        TEMP=A[K];
        PTR=K-1;

    while(TEMP<A[PTR])
    {
        A[PTR+1]=A[PTR];
        PTR=PTR-1;
    }
    A[PTR+1]=TEMP;
}
}
