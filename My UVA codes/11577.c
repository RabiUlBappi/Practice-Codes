#include<stdio.h>
#include<string.h>
int main()
{
    int n,l,a[100],i,j,m,k,x,y;
    char s[1000];
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        gets(s);
        l=strlen(s);
        for(y=0;y<26;y++)
            a[y]=0;
        for(i=0;i<l;i++)
        {
            for(j=0;j<26;j++)
            {
                if(s[i]-97==j)
                    a[j]++;
                else if(s[i]-65==j)
                    a[j]++;
            }
        }
        m=0;
        for(x=0;x<26;x++)
        {
            if(a[x]>m)
                m=a[x];
        }
        for(k=0;k<26;k++)
        {
            if(a[k]!=0&&a[k]==m)
                printf("%c",k+97);
        }
        printf("\n");
    }
    return 0;
}
