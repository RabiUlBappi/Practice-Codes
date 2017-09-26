//1. Display parent id & process id
#include <stdio.h>
int main()
{
    printf("\n Parent process id %d",getppid());
    printf("\n Child Process id %d\n",getpid());
}
