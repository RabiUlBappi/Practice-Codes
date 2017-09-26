#include<stdio.h>
main()
{
    int amnt,num,srtnum;
    int sum=0,t,a1[100];
    printf("How many numbers do you want to take ?\n");
    scanf("%d",&amnt);
    printf("Enter the numbers: ");
    for(num=0;num<amnt;num++)
    scanf("%d",&a1[num]);
    for(num=1;num<amnt;num++)
    {
        for(srtnum=amnt-1;srtnum>=num;srtnum--)
            if(a1[srtnum-1]<a1[srtnum])
        {
            t=a1[srtnum-1];
            a1[srtnum-1]=a1[srtnum];
            a1[srtnum]=t;
        }
    }
    sum=a1[0]+a1[amnt-1];
    for(t=0;t<amnt;t++)
    {
        printf("%d\n",a1[t]);
    }
        printf("\nSum of the highest & the lowest nuumbers is: %d\n",sum);
}
