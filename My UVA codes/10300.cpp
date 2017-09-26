#include<cstdio>
#include<fstream>
#define M 100009
int main()
{
    int n,f,a[M],b[M],c[M],i,sum;
    //freopen("0in.txt","r",stdin);
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&f);
        sum=0;
        for(i=0;i<f;i++)
        {
            scanf("%d%d%d",&a[i],&b[i],&c[i]);
            sum+=a[i]*c[i];
        }
        printf("%d\n",sum);
    }
    return 0;
}
