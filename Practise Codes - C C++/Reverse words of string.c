#include<stdio.h>
#include<string.h>
main()
{
    char str1[100],str2[100];
    int i,j,l,k=0;
    gets(str1);
    l=strlen(str1);
    for(i=0;i<l;i++)
    {
        if(str1[i]==' ')
        {
           continue;
           if(str1[i+1]>='A'||str1[i+1]>='a'&&str1[i+1]<='Z'||str1[i+1]<='z')
           for(j=l-1;j>0;j--)
            str2[j]=str1[i];
           puts(str2);
        }

    }
}
