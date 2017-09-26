#include<stdio.h>
#include<string.h>
main()
{
    int i,j,k,m;
    scanf("%d",&i);
    getchar();
    while(i--)
    {
        char s1[30],s2[30];
        gets(s1);
        gets(s2);
        if(strlen(s1)==strlen(s2))
        {
            m=0;
            for(j=k=0;s1[j]!='\0';j++,k++)
            {
                if(s2[k]==s1[j])
                    continue;
                else if((s1[j]=='a'||s1[j]=='e'||s1[j]=='i'||s1[j]=='o'||s1[j]=='u')&&(s2[k]=='a'||s2[k]=='e'||s2[k]=='i'||s2[k]=='o'||s2[k]=='u'))
                    continue;
                else
                {
                    m=1;
                    break;
                }
            }
            if(m==0)
                printf("Yes\n");
            else
                printf("No\n");
        }
        else printf("No\n");
    }
}
