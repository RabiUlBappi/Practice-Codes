/*#include<stdio.h>
#include<string.h>
main()
{
    int i,j,k,l,a[1000];
    char s[1000];
    while(scanf("%s",s)==1)
    {
        l=strlen(s);
        for(i=0;i<l;i++)
        {
            if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='H'||s[i]=='W'||s[i]=='Y')
                a[j]=0;
            else if(s[i]=='B'||s[i]=='F'||s[i]=='P'||s[i]=='V')
                a[j]=1;
            else if(s[i]=='C'||s[i]=='G'||s[i]=='J'||s[i]=='K'||s[i]=='Q'||s[i]=='S'||s[i]=='X'||s[i]=='Z')
                a[j]=2;
            else if(s[i]=='D'||s[i]=='T')
                a[j]=3;
            else if(s[i]=='L')
                a[j]=4;
            else if(s[i]=='M'||s[i]=='N')
                a[j]=5;
            else if(s[i]=='R')
                a[j]=6;
        }
        for(k=0;k<j;k++)
        {
            if(a[k]==a[k+1]||a[k]==0)
                continue;
            printf("%d",a[k]);
        }
        printf("\n");
    }
    return 0;
}

Hi, shaikat. After checking the following input, try to debugging :) Input : KHAWN PFISTER BOBBY AADDAAGJ KKLPA KL OP
PPPPAOAOOOAOOSDF MMNBGDF AAPQOW ZZZZX XXZ PPPQOHIAKL ABCDEFGHIJKLMNOPQRSTUVWXYZ ZXY HIJKL MNOPAS QRTS APA
Output should be : 25 1236 11 32 241 24 1 1231 51231 12 2 2 1224 12312245126...

*/

#include<stdio.h>
#include<string.h>
main()
{
    int i,j,k,l,a[1000];
    char s[1000];
    while(scanf("%s",s)==1)
    {
        l=strlen(s);
        for(i=0,j=0;i<l;i++,j++)
        {
            if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='H'||s[i]=='W'||s[i]=='Y')
                a[j]=0;
            else if(s[i]=='B'||s[i]=='F'||s[i]=='P'||s[i]=='V')
                a[j]=1;
            else if(s[i]=='C'||s[i]=='G'||s[i]=='J'||s[i]=='K'||s[i]=='Q'||s[i]=='S'||s[i]=='X'||s[i]=='Z')
                a[j]=2;
            else if(s[i]=='D'||s[i]=='T')
                a[j]=3;
            else if(s[i]=='L')
                a[j]=4;
            else if(s[i]=='M'||s[i]=='N')
                a[j]=5;
            else if(s[i]=='R')
                a[j]=6;
        }
        for(k=0;k<j;k++)
        {
            if(a[k]==a[k-1]||a[k]==0)
                continue;
            printf("%d",a[k]);
        }
        printf("\n");
    }
    return 0;
}
