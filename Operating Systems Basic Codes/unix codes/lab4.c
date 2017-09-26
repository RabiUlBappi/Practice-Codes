//4. Making child as orphan
#include <stdio.h>
main()
{
    int pid,pid1;
    pid=fork();
    if (pid>0)
    {
        printf("From Parent Process\n");
        printf("\n Parent process id %d",getpid());
    }
    else
    {
        sleep(1);
        printf("From Child Process\n");
        printf("\n Child process id %d\n",getpid());
    }
}
