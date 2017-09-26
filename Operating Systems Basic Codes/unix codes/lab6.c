//6.Use of Exit system call
#include <stdio.h>
main()
{
    int pid;
    pid=fork();
    printf("%d\n",pid);
    if (pid<0)
    {
        perror("Child can not be executed\n");
        exit(-1);
    }
    else
    {
        printf("Child created\n");
        exit(0);
    }
}
