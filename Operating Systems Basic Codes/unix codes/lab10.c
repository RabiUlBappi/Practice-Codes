//10. Create process & display pid of parent & child
#include <stdio.h>
#include <dirent.h>
main(int argc,char**argv)
{
    int pid,i;
    for(i=0;i<atoi(argv[1]);i++)
    {
        pid=fork();
        if (pid==0)
        {
            printf("Child Process ID %d Parent Process ID %d\n",getpid(),getppid());
        }
    }
}
