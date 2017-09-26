#include<stdio.h>
main()
{
    long long int i,j,ter[1000],dec;
    while(scanf("%lld",&dec)==1)
    {
        if(dec<0)
            break;
        else if(dec==0)
            printf("%lld\n",0);
        else
        {
            i=0;
            while(dec!=0)
            {
                ter[i]=(dec%3);
                dec/=3;
                i++;
            }
            for(j=i-1;j>=0;j--)
                printf("%lld",ter[j]);
            printf("\n");
        }
    }
    return 0;
}
