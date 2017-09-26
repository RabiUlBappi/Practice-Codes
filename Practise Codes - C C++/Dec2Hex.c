#include<stdio.h>
#include<string.h>
main()
{
    int i=0,j,l,m,dec;
    char hex[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'},hex2[100];
    scanf("%d",&dec);
    while(dec!=0)
    {
        m=dec%16;
        dec/=16;
        hex2[i]=hex[m];
        i++;
    }
    hex2[i]='\0';
    l=strlen(hex2);
    for(j=l-1;j>=0;j--)
        printf("%c",hex2[j]);
    return 0;

}


