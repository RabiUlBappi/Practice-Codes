#include<cstdio>
//#include<fstream>

int main()
{
    long long unsigned x,sum=0,i;
    //freopen("0in.txt","r",stdin);
    while(scanf("%llu",&x)==1)
    {
        sum=(x*(x+1)/2)*(x*(x+1)/2);
        printf("%llu\n",sum);
    }
    return 0;
}
