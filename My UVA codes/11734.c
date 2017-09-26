#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k=1,l1,l2,m,n;
    char s1[1000],s2[1000],s3[1000];
    scanf("%d",&i);
    getchar();
    while(i--)
    {
        gets(s1);
        gets(s2);
        if(strcmp(s2,s1)==0)
            printf("Case %d: Yes\n", k);
        else
        {
            l1=strlen(s1);
            m=0;
            n=0;
            for(j=0;j<l1;j++)
            {
               if(s1[j]==s2[m])
                   s3[n]=s1[j];
               else if(s1[j]>='a'&&s1[j]<='z')
                   s3[n]=s1[j];
               else if(s1[j]>='A'&&s1[j]<='Z')
                   s3[n]=s1[j];
               else continue;
               m++;
               n++;
            }
            s3[n]='\0';
            if(strcmp(s3,s2)==0)
                printf("Case %d: Output Format Error\n",k);
            else
                printf("Case %d: Wrong Answer\n",k);
        }
        k++;
    }
    return 0;
}
/*
o-i
aba-a_b_a-oferr;
a b c-_a_b_c-oferr;
*/
