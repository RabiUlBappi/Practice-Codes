/*#include"stdio.h"
#include"string.h"
int main()
{
    char s[100000],r[100000];
    int i,l;
    while(gets(s))
    {
        l=strlen(s);
        for(i=0;i<l;i++)
        {
            if(s[i]>=50&&s[i]<=57)
                r[i]=s[i]-1;
            else if(s[i]=='1') r[i]='`';
            else if(s[i]=='0') r[i]='9';
            else if(s[i]=='-') r[i]='0';
            else if(s[i]=='=') r[i]='-';
            else if(s[i]==' ') r[i]=' ';

            else if(s[i]=='W') r[i]='Q';
            else if(s[i]=='E') r[i]='W';
            else if(s[i]=='R') r[i]='E';
            else if(s[i]=='T') r[i]='R';
            else if(s[i]=='Y') r[i]='T';
            else if(s[i]=='U') r[i]='Y';
            else if(s[i]=='I') r[i]='U';
            else if(s[i]=='O') r[i]='I';
            else if(s[i]=='P') r[i]='O';
            else if(s[i]=='[') r[i]='P';
            else if(s[i]==']') r[i]='[';
            else if(s[i]=='\\') r[i]=']';

            else if(s[i]=='S') r[i]='A';
            else if(s[i]=='D') r[i]='S';
            else if(s[i]=='F') r[i]='D';
            else if(s[i]=='G') r[i]='F';
            else if(s[i]=='H') r[i]='G';
            else if(s[i]=='J') r[i]='H';
            else if(s[i]=='K') r[i]='J';
            else if(s[i]=='L') r[i]='K';
            else if(s[i]==';') r[i]='L';
            else if(s[i]=='\'')  r[i]=';';

            else if(s[i]=='X') r[i]='Z';
            else if(s[i]=='C') r[i]='X';
            else if(s[i]=='V') r[i]='C';
            else if(s[i]=='B') r[i]='V';
            else if(s[i]=='N') r[i]='B';
            else if(s[i]=='M') r[i]='N';
            else if(s[i]==',') r[i]='M';
            else if(s[i]=='.') r[i]=',';
            else if(s[i]=='\n') r[i]='\n';
        }
        puts(r);
        for(i=0;i<l;i++)
            r[i]='\0';
    }
    return 0;
}*/



#include<stdio.h>
int main()
{
    char c;
    while ( scanf("%c",&c)==1)
    {
        if (c=='1')
            printf("`");
        if (c=='2')
            printf("1");
        if (c=='3')
            printf("2");
        if (c=='4')
            printf("3");
        if (c=='5')
            printf("4");
        if (c=='6')
            printf("5");
        if (c=='7')
            printf("6");
        if (c=='8')
            printf("7");
        if (c=='9')
            printf("8");
        if (c=='0')
            printf("9");
        if (c=='-')
            printf("0");
        if (c=='=')
            printf("-");
        if (c=='W')
            printf("Q");
        if (c=='E')
            printf("W");
        if (c=='R')
            printf("E");
        if (c=='T')
            printf("R");
        if (c=='Y')
            printf("T");
        if (c=='U')
            printf("Y");
        if (c=='I')
            printf("U");
        if (c=='O')
            printf("I");
        if (c=='P')
            printf("O");
        if (c=='[')
            printf("P");
        if (c==']')
            printf("[");
        if (c=='\\')
            printf("]");
        if (c=='S')
            printf("A");
        if (c=='D')
            printf("S");
        if (c=='F')
            printf("D");
        if (c=='G')
            printf("F");
        if (c=='H')
            printf("G");
        if (c=='J')
            printf("H");
        if (c=='K')
            printf("J");
        if (c=='L')
            printf("K");
        if (c==';')
            printf("L");
        if (c=='\'')
            printf(";");
        if (c=='X')
            printf("Z");
        if (c=='C')
            printf("X");
        if (c=='V')
            printf("C");
        if (c=='B')
            printf("V");
        if (c=='N')
            printf("B");
        if (c=='M')
            printf("N");
        if (c==',')
            printf("M");
        if (c=='.')
            printf(",");
        if (c=='/')
            printf(".");
        if (c==' ')
            printf(" ");
        if (c=='\n')
            printf("\n");
    }
    return 0;
}
