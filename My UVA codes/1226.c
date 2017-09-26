#include<stdio.h>
#include<string.h>
main()
{
    long long unsigned j,k,l,a,b,n,carry,tc,div;
    int a1[2100],res[2100];
    char s1[2100];
    scanf("%llu",&tc);
    while(tc--){
    scanf("%llu",&div);
    scanf("%s",s1);
    l=strlen(s1);
    for(j=0,k=0;j<l;j++,k++)
        a1[k]=s1[j]-'0';
    carry=0;
    for(a=0,b=0;a<j;a++,b++)
    {
        res[b]=(carry*10+a1[a])/div;
        carry=(carry*10+a1[a])%div;
    }
        printf("%llu\n",carry);
    }
    return 0;
}

