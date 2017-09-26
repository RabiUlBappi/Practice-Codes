#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[1000],i,j,k,t=0;
    int min=0,max=0,mid=0,l,findn;
    for(i=0;i<500;i++)
        a[i]=rand()/100+1;
    for(j=0;j<i-1;j++)
    {
        for(k=0;k<i-1-j;k++)
        {
            if(a[k]>a[k+1])
            {
                t=a[k];
                a[k]=a[k+1];
                a[k+1]=t;
            }
        }
    }
    for(i=0;i<500;i++)
        printf("%d,",a[i]);
    printf("\n");
    scanf("%d",&findn)==1;
    max=i-1;
    while(min<=max)
    {
        mid=(min+max)/2;
        if(findn<a[mid])
            max=mid-1;
        else
        {
            if(findn>a[mid])
            min=mid+1;
        else if(findn==a[mid])
        {
            printf("Found.\n");
            break;
        }
        }
    }
}
