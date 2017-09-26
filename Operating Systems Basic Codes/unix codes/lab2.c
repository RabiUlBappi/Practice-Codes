
//2. Process creation using fork
#include <stdio.h>
main()
{
    printf("Before Fork %d\n",getppid());
    fork();
    printf("After Fork %d\n",getppid());
}
