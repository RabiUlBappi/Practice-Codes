#include<stdio.h>
#include<string.h>
main()
{
    char s1[100];
    int i;
    gets(s1);
    for(i=0;i<strlen(s1);i++)
    {
        if(s1[i+1]==s1[i]&&" ")
          continue;
        printf("%s",s1);
    }

}
