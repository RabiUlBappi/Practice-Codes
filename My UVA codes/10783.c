#include<stdio.h>
main()
{
        int a,b,i,j,k=1;
        scanf("%d",&j);
        while(j!=0){
        int sum=0;
        scanf("%d",&a);
        scanf("%d",&b);
        for(i=a;i<=b;i++){
            if(i%2!=0)
            sum+=i;
        }
        printf("Case %d:%d\n",k,sum);
        j--;
        k++;
        }

}
