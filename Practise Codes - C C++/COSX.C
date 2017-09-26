#include<stdio.h>
int main()

{
    char ch='X';

    int i,j,k,number;

    printf ("Enter the number of order:");

    scanf("%d",&number);

 //   printf("\n cosx =%c-",ch);

    for(j=1;j<number;j++)

    {
        for(i=(j+j);i<=(j+j);i+=2)

        printf("%c^%d/%d!",ch,i,i);

        if(j%2==0)
            printf("-");

        else
            printf("+");

    }
    printf("......\n");
    return 0;
}
