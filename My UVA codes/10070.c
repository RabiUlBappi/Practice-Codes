/*#include"stdio.h"
int main()
{
    int i,j,carry1,carry2,carry3,carry4,carry5,k;
    char s[1000000];
    while(scanf("%s",s)!=EOF)
    {
        carry1=carry2=carry3=carry4=carry5=0;
        for(i=0;s[i]!='\0';i++)
        {
            carry1=(carry1*10+s[i]-'0')%4;
            carry2=(carry2*10+s[i]-'0')%400;
            carry3=(carry3*10+s[i]-'0')%100;
            carry4=(carry4*10+s[i]-'0')%15;
            carry5=(carry5*10+s[i]-'0')%55;
        }
        if(((carry1!=0&&carry3!=0)||(carry1==0&&carry3==0))&&carry2!=0&&carry4!=0&&carry5!=0)
            printf("This is an ordinary year.\n");
        else
        {
            k=0;
            if((carry1==0&&carry3!=0)||carry2==0)
            {
                printf("This is leap year.\n");
                k++;
            }
            if(carry4==0)
                printf("This is huluculu festival year.\n");
            if(carry5==0&&k==1)
                printf("This is bulukulu festival year.\n");
        }
        printf("\n");
    }
    return 0;
}
*/

#include"stdio.h"
#include"string.h"
int main()
{
    int i,j,c,n,l=0,r[5],a[]={4,100,400,15,55};
    char s[1000000];
    while(scanf("%s",s)!=EOF)
    {
        for(i=0;i<5;i++)
            for(j=0,r[i]=0;s[j];r[i]=10*r[i]+s[j]-'0',r[i]%=a[i],j++);
        if(l)
        printf("\n");
        l = 1;
        n=c=0;
        if((!r[0]&&r[1])||!r[2])
        {
            printf("This is leap year.\n");
            n++;
            c=1;
        }
        if(!r[3])
        {
            printf("This is huluculu festival year.\n");
            c=1;
        }
        if(!r[4]&&n>0)
            printf("This is bulukulu festival year.\n");
        if(c==0)
            printf("This is an ordinary year.\n");
    }
    return 0;
}/*


#include<stdio.h>
#include<string.h>

int divider(char y[],int z,int p)
{
    int c = 0,i;
    for(i=0;i<z;i++)
    {
        c = ((y[i]-'0') + c * 10)% p;
    }
    if(c == 0)return 0;
    else return 1;
}

int main()
{
    char year[1000000];
    int l=0;
    while(scanf("%s",year)!=EOF)
    {
        int flag,x,leap;

        x = strlen (year);
        if(l)
        printf("\n");
        l = 1;
        flag = 0;
        leap = 0;
        if( (divider(year,x,4) == 0 && divider(year,x,100) != 0 )
             ||(divider(year,x,400) == 0))
        {

                printf("This is leap year.\n");
                leap = 1;
                flag = 1;

        }
        if( divider(year,x,15) == 0)
        {
            printf("This is huluculu festival year.\n");
            flag = 1;
        }
        if( leap == 1 && divider(year,x,55)==0 )
        printf("This is bulukulu festival year.\n");
        if(flag == 0)
        printf("This is an ordinary year.\n");


    }
    return 0;
}*/

