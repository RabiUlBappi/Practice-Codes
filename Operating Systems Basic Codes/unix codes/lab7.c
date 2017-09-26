//7. Using of fork & exec system call
#include <stdio.h>
int main()
{
    int pid;
    pid=fork();
    printf("%d\n",pid);
    if (pid==0)
    {

        execve ("/root\n",NULL,NULL);
        exit(0);
    }
    else
    {
        printf("\n Parent process id %d\n",pid);
    }
}
