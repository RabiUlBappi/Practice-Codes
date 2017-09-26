#include<stdio.h>
#define MAX 1000010
int a[MAX];
int b[MAX];
int res[MAX];

int main()
{
    int block,intlen,j,k,carry;
    scanf("%d",&block);
    while(block--)
    {
        carry=0;
        scanf("%d",&intlen);
        for(j=0;j<intlen;j++)
            scanf("%d%d",&a[j],&b[j]);
        for(k=intlen-1;k>=0;k--)
        {
            res[k]=(a[k]+b[k]+carry)%10;
            carry=(a[k]+b[k]+carry)/10;
        }
        if(!carry)
        for(k=0;k<intlen;k++)
            printf("%d",res[k]);
        else
        {
            printf("%d",carry);
            for(k=0;k<intlen;k++)
            printf("%d",res[k]);
        }
        if(block)
            printf("\n\n");
        else printf("\n");
    }
    return 0;
}
