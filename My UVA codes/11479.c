#include"stdio.h"
int main()
{
    unsigned long i, T, a, b, c;
    scanf("%lu", &T);
    if(T<20)
    {
        for(i=1; i<=T; i+=1)
        {
            scanf("%lu%lu%lu", &a, &b, &c);
            if(a+b<=c || b+c<=a || c+a<=b)
                printf("Case %lu: Invalid\n", i);
            else if(a==b && a==c)
                printf("Case %lu: Equilateral\n", i);
            else if(a==b || b==c || c==a)
                printf("Case %lu: Isosceles\n", i);
            else
                printf("Case %lu: Scalene\n", i);
        }

    }
    return 0;
}
