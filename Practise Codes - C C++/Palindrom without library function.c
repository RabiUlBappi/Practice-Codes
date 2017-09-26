
#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100];
    int i,j,l;
    gets(s1);
    l=strlen(s1);
    if(s1[0]==s1[l-1])
    {
             for(i=0,j=l-1;i<=l;i++,j--)
             {
                 s2[j]=s1[i];
             }
             if(s2==s1)
                 printf("Palindrom");
             else
                 printf("Not Palindrom");
    }
    else
        printf("Not Palindrom");
}
