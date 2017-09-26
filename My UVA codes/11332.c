#include<stdio.h>
main()
{
      long int num,sum;
      while(scanf("%lu",&num)==1&&num!=0)
      {
            if(num<9)
               printf("%lu",num);
            while(num>9)
            {
                sum=0;
                while(num>0)
                {
                    sum+=num%10;
                    num=num/10;
                }
                num=sum;
            }
            printf("%lu\n",sum);
      }
      return 0;
}
