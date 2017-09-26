#include<stdio.h>
#include<string.h>
#define INT_MAX 2147483647
int main()
{
    char str[4];
    int b[3],c[3],g[3];
    while(scanf("%d%d%d%d%d%d%d%d%d",&b[0],&g[0],&c[0],&b[1],&g[1],&c[1],&b[2],&g[2],&c[2])!=EOF)
    {
        int temp,min=INT_MAX;
        temp=b[1]+b[2]+c[0]+c[2]+g[0]+g[1];
        if(temp<min)
        {
            min=temp;
            strcpy(str,"BCG");
        }
        temp=b[1]+b[2]+c[0]+c[1]+g[0]+g[2];
        if(temp<min)
        {
            min=temp;
            strcpy(str,"BGC");
        }
        temp=b[0]+b[2]+c[1]+c[2]+g[0]+g[1];
        if(temp<min)
        {
            min=temp;
            strcpy(str,"CBG");
        }
        temp=b[0]+b[1]+c[1]+c[2]+g[0]+g[2];
        if(temp<min)
        {
            min=temp;
            strcpy(str,"CGB");
        }
        temp=b[0]+b[2]+c[1]+c[0]+g[1]+g[2];
        if(temp<min)
        {
            min=temp;
            strcpy(str,"GBC");
        }
        temp=b[0]+b[1]+c[0]+c[2]+g[1]+g[2];
        if(temp<min)
        {
            min=temp;
            strcpy(str,"GCB");
        }
        printf("%s %d\n",str,min);
    }
    return 0;
}
