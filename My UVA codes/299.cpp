//এই কোড টা সি তে  একসেপ্ট করসে ।

#include<stdio.h>
int main()
{
    int n,l,i,j,t,counter,carriage[100];
    freopen("0in.txt","r",stdin);
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&l);
        for(i=0;i<l;i++)
            scanf("%d",&carriage[i]);
        counter=0;
        for(j=1;j<l;j++)
        for(i=l-1;i>=j;i--)
        {
            if(carriage[i-1]>carriage[i])
            {
                t=carriage[i-1];
                carriage[i-1]=carriage[i];
                carriage[i]=t;
                counter++;
            }
        }
        printf("Optimal train swapping takes %d swaps.\n",counter);
    }
    return 0;
}
