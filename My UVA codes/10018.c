#include<stdio.h>
long long unsigned myrev(long long unsigned num)
{
    long long unsigned new_num;
    new_num=0;
    while(num!=0)
    {
        new_num=new_num*10+(num%10);
        num/=10;
    }
    return new_num;
}
main()
{
    long long unsigned k,n,itr,num1,n_num1,n_num2,t;
    scanf("%llu",&n);
    while(n--)
    {
        scanf("%llu",&num1);
        itr=0;
        while(1)
        {
            itr++;
            n_num1=num1+myrev(num1);
            n_num2=myrev(n_num1);
            if(n_num2==n_num1){
                printf("%llu %llu\n",itr,n_num2);
                break;
            }
            else
                num1=n_num1;
        }
    }
    return 0;
}
