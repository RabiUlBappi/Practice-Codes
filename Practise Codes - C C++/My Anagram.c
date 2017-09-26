#include<stdio.h>
#include<string.h>
main()
{
    char s1[100],s2[100];
    int i,k,l,j;
    int ara1[100],ara2[100],ln1,ln2;
    gets(s1);
    gets(s2);
    ln1=strlen(s1);
    ln2=strlen(s2);
    for(j='a';j<'z';j++)
        ara1[j]=0;
    for(j='a';j<'z';j++)
        ara2[j]=0;
    if(ln1==ln2)
    {
        for(i=0;i<ln1;i++)
        {
            for(j='a';j<'z';j++)
                if(s1[i]==j)
                {
                    ara1[j]++;
                    break;
                }

        }
        for(j='a';j<'z';j++)
            if(ara1[j]!=0)
               printf("%c occurs %d times.\n",j,ara1[j]);

        for(i=0;i<ln1;i++)
        {
            for(j='a';j<'z';j++)
                if(s2[i]==j)
                {
                    ara2[j]++;
                    break;
                }

        }
        for(j='a';j<'z';j++)
            if(ara2[j]!=0)
               printf("%c occurs %d times.\n",j,ara2[j]);

    }
}
