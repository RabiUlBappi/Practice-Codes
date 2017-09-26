#include<stdio.h>
int LOC=0,K,J,min,N,TEMP;
void MIN(int *A,int K,int N,int LOC){
    min=A[K];
    LOC=K;
    for(J=K+1;J<N;J++) {
        if(min>A[J]) {
            min=A[J];
            LOC=J;
        }
    }
    TEMP=A[K];
    A[K]=A[LOC];
    A[LOC]=TEMP;
}
void SELECTION(int *A,int N){
    for(K=0;K<N-1;K++)
        MIN(A,K,N,LOC);
}

int main(){
    int A[100];
    scanf("%d",&N);
    for(int i=0;i<N;i++)
    {
        scanf("%d",&A[i]);
    }
    SELECTION(A,N);
    for(int i=0;i<N;i++)
    {
        printf("%d ",A[i]);
    }
}
