//8. To list files in specified directory
#include <stdio.h>
#include <dirent.h>
int main()
{
    char d[1000];
    DIR *p;
    struct dirent *di;
    printf("Enter a directory name: ");
    scanf("%s",d);
    p=opendir(d);
    if (p==NULL)
    {
        perror("Can't find directory");
        exit(-1);
    }
    else
    while (di=readdir(p))
        printf("%s\n",di->d_name);
}
