#include <stdio.h>
int main()
{
    int f1,f2,f3;f1=f2=1;
    for (f1=1;f1<=10;f1++);
    {
        f3=f1+f2;
        f1=f2;
        f2=f3;
    }
    printf ("%d", &f3);
    return 0;
}
