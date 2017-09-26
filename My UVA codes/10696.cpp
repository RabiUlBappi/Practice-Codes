#include<cstdio>
int main()
{
    int n;
    while(scanf("%d",&n)&&n!=0)
    {
        if(n<101) printf("f91(%d)=91\n",n);
        else printf("f92(%d)=%d\n",n,n-10);
    }
    return 0;
}
