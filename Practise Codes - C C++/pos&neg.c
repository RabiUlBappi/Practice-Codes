#include<stdio.h>
main()
{
    int i;
    while(9)
    {
        scanf("%d", &i);
        if (i>=0)
            printf("%d is positive\n", i);
        else
            printf("%d is negetive\n", i);

    }
    return 0;
}
