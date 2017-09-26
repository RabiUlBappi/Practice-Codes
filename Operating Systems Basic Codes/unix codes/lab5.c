//5. Parents wait till completion of child
#include <stdio.h>
int main()
{
    int pid;
    pid=fork();
    printf("%d\n",pid);
    if (pid==0)
    {
        printf("From Child Process\n");
    }
    else
    {
        wait(0);
        printf("From Parent Process\n");
    }
}
