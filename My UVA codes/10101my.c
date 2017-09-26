compilation error . (-indexing in a[] array)


#include<stdio.h>
int main()
{
    long long unsigned i;
    int j,v,k,no=1,a[100];
    while(scanf("%llu",&i)==1){
        if(i==0) printf("%4d. %d\n",no++,0);
        else{
        j=0;
        while(i!=0){
            if((j-1)%8==0){
                a[j]=111;
                j++;
                a[j]=i%10;
                i/=10;
            }
            else if((j-3)%8==0)
                a[j]=222;
            else if((j-5)%8==0)
                a[j]=333;
            else if((j-7)%8==0)
                a[j]=444;
            else{
                a[j]=i%100;
                i/=100;
            }
            j++;
        }
        v=j-1;
        printf("%4d. ",no++);
        for(k=j-1;k>=0;k--){
            if(a[k]==111){
                if(a[k+1]==0) continue;
                else printf(" shata");
            }
            else if(a[k]==222){
                if(a[k+1]==0) continue;
                else printf(" hajar");
            }
            else if(a[k]==333){
                if(a[k+1]==0) continue;
                else printf(" lakh");
            }
            else if(a[k]==444)
                printf(" kuti");
            else{
                if(a[k]==0) continue;
                else if(k==v) printf("%d",a[k]);
                else printf(" %d",a[k]);
            }
        }
        printf("\n");
        }
    }
    return 0;
}
