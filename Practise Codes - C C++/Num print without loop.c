#include<stdio.h>
main()
{
    int n=1;
    if(n!=100)
    {
        printf("%d",n);
        goto*n;
    }
    return 0;
}
