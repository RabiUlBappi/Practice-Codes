//11.Program to rename a directory
#include <stdio.h>
int main()
{
    char s[1000],d[1000];
    printf("Enter Source Dir Name: \n");
    scanf("%s",s);
    printf("Enter New Dir Name: \n");
    scanf("%s",d);
    if (rename(s,d)==-1)
    perror("Cant be changed\n");
    else
    printf("%s is changed to %s\n\n",s,d);
}
