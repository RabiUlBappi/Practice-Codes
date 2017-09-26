#include<stdio.h>
#include<math.h>
main()
{
    long long unsigned i,k,l,m,n,dec;
    int bina[1000],bina2[1000];
    while(1)
    {
        scanf("%llu",&dec);
        if(dec==0)
            break;
        else
        {
            k=0;
            i=0;
            while(dec!=0)
            {
                bina[i]=(dec%2);
                if(dec%2==1)
                    k++;
                dec/=2;
                i++;
            }
            printf("The parity of ");
            for(m=0,l=i-1;l>=0,m<i;m++,l--)
            {
                bina2[m]=bina[l];
                printf("%llu",bina2[m]);
            }
            printf(" is %llu (mod 2).\n",k);
        }
    }
    return 0;
}
