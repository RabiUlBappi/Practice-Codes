#include<stdio.h>
#include<string.h>
main()
{
    char s1[111],s2[111];
    int i,j,l;
    gets(s1);
    l=strlen(s1);
    for(i=0,j=l-1;i<l;i++,j--)
    {
        s2[j]=s1[i];
    }
    puts(s2);
}\
