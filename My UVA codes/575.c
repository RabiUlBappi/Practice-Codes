#include<stdio.h>
#include<math.h>
#include<string.h>
main()
{
    long long unsigned dec;
    int n,l,i,j,k,numa[1000];
    char nums[1000];
    while(1)
    {
        dec=0;
        n=0;
        scanf("%s",nums);
        l=strlen(nums);
        for(i=0;i<l;i++)
        {
            numa[i]=nums[i]-'0';
            n+=numa[i];
        }
        k=l;
        if(n==0)
            break;
        else
        {
            for(j=0;j<l;j++)
            {
                dec+=(numa[j]*(pow(2,k)-1));
                k--;
            }
            printf("%llu\n",dec);
        }
    }
}
