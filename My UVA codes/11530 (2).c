#include<stdio.h>
#include<string.h>
int main()
{
    int i,k=1;
    scanf("%d",&i);
    getchar();
    while(i--)
    {
        char str[1000];
        int l,j,press=0;
        gets(str);
        l=strlen(str);
        for(j=0;j<l;j++)
        {
            if(str[j]=='a'||str[j]=='d'||str[j]=='g'||str[j]=='j'||str[j]=='m'||str[j]=='p'||str[j]=='t'||str[j]=='w'||str[j]==' ')
                press++;
            else if(str[j]=='c'||str[j]=='f'||str[j]=='i'||str[j]=='l'||str[j]=='o'||str[j]=='r'||str[j]=='v'||str[j]=='y')
                press+=3;
            else if(str[j]=='b'||str[j]=='e'||str[j]=='h'||str[j]=='k'||str[j]=='n'||str[j]=='q'||str[j]=='u'||str[j]=='x')
                press+=2;
            else if(str[j]=='s'||str[j]=='z')
                press+=4;
        }
        printf("Case #%d: %d\n",k,press);
        k++;
    }
    return 0;
}
