#include<stdio.h>
int GCD(int a,int b)
{
    int mod;
    for(;;)
    {
        int mod=b%a;
        if(mod==0)
            break;
        b=a;
        a=mod;
    }
    return a;
}
int main()
{
    int i,j,N;
    while(N!=0)
    {
        int G=0;
        scanf("%d",&N);
        for(i=1;i<N;i++)
        for(j=i+1;j<=N;j++)
        {
           G+=GCD(i,j);
        }
        printf("%d\n\n",G);
    }
    return 0;
}


