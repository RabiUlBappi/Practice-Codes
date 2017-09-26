#include"stdio.h"
#include"string.h"
int main()
{
    char a[1000],b[1000],r[1000];
    int i,j,k,m,carry,t,l1,l2;
    while(scanf("%s%s",a,b)==2)
    {
        if(atoi(a)==0&&atoi(b)==0)
            break;
        else{
        l1=strlen(a);
        l2=strlen(b);
        carry=k=0;
        for(i=l1-1,j=l2-1,m=0;i>=0||j>=0;i--,j--,m++)
        {
            if(i<0)
                t=(carry+(b[j]-'0'));
            else if(j<0)
                t=(carry+(a[i]-'0'));
            else
                t=(carry+(a[i]-'0')+(b[j]-'0'));
            r[m]=t%10+'0';
            carry=t/10;
            if(carry>0)
                k++;
        }
        if(k==0)
            printf("No carry operation.\n");
        else if(k==1)
            printf("%d carry operation.\n",k);
        else if(k>1)
            printf("%d carry operations.\n",k);
        }
    }
    return 0;
}
