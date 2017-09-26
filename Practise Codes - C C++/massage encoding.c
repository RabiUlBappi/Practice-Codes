#include<stdio.h>
main()
{
    char mess[10];
    int i;
    for(i=0;i<10;i++)
    {
        mess[i]=getchar();
        if(mess[i]=='\r')
            break;
    }
    printf("\n");
    for(i=0;mess[i]!='\r';i++)
         printf("%c",mess[i]+1);
}
