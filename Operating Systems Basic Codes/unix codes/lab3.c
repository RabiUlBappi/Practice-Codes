//3.Process with fork
#include <stdio.h>
main()
{
    int pid;
    pid=fork();
    if (pid>0)
    {
        printf("From Parent\n");
        printf("\n Parent process id %d\n",getpid());
    }
    else
    {
        printf("From Child\n");
        printf("\n Child process id %d\n",getpid());
    }
}
