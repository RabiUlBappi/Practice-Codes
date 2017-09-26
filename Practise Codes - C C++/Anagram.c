#include<stdio.h>
#include<string.h>
main()
{
    char s1[100],s2[100];
    int i,j,k=0,l1,l2;
    printf("Enter two strings: ");
    gets(s1);
    gets(s2);
    l1=strlen(s1);
    l2=strlen(s2);
    if(l1==l2)
    {
        for(i=0;i<l1;i++)
        {
            for(j=0;j<l2;j++)
                if(s1[i]==s2[j])
                {
                    k++;
                    break;
                }

        }
    }

    if(k==l1)
        printf("Anagram");
    else
        printf("Not anagram");
}
