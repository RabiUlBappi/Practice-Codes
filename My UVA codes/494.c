#include<stdio.h>
#include<string.h>
int main()
{
    char s1[1000];
    int i,l,word;
    while(gets(s1))
    {
        l=strlen(s1);
        word=0;
        for(i=1;i<l;i++)
        {
            if((s1[i]<'A'||s1[i]>'z')&&((s1[i-1]>='A'&&s1[i-1]<='Z')||(s1[i-1]>='a'&&s1[i-1]<='z')))
                word++;
            else if((s1[i]>'Z'&&s1[i]<'a')&&((s1[i-1]>='A'&&s1[i-1]<='Z')||(s1[i-1]>='a'&&s1[i-1]<='z')))
                word++;
        }
        printf("%d\n",word);
    }
    return 0;
}
