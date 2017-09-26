#include<stdio.h>
#include<string.h>
main()
{
    char str[100];
    int i,l;
    gets(str);
    l=strlen(str);
    printf("%c",str[0]);
    for(i=0;i<l;i++)
    {
        if(str[i]==' ')
        printf("%c",str[i+1]);
    }
}
