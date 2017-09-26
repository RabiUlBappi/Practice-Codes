#include<stdio.h>
#include<string.h>
main()
{
    int i=0,j,l,m,oct;
    char bin[]={'000','001','010','011','100','101','110','111'},bin2[100];
    scanf("%d",&oct);
    while(oct!=0)
    {
        m=oct%10;
        oct/=10;
        bin2[i]=bin[m];
        i++;
    }
    bin2[i]='\0';
    l=strlen(bin2);
    for(j=l-1;j>=0;j--)
        printf("%c",bin2[j]);
    return 0;

}



