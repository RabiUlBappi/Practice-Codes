#include<stdio.h>
int main()
{
    int number,n;

    printf("Enter the Number:");

    scanf("%d",&number);

    n=number/10;

    switch(n)

    {
        case 0 :
                    printf("FAIL");
                    break;
        case 1 :
                    printf("FAIL");
                    break;
        case 2 :
                    printf("FAIL");
                    break;
        case 3 :
                    printf("FAIL");
                    break;
        case 4 :
                    printf("Your grade is C");
                    break;
        case 5 :
                    printf("Your grade is B");
                    break;
        case 6 :
                    printf("Your grade is A-");
                    break;
        case 7 :
                    printf("Your grade is A");
                    break;
        case 8 :
                    printf("Your grade is A+");
                    break;
        case 9 :
                    printf("Your grade is A+");
                    break;
        case 10 :
                    printf("Your grade is A+");
                    break;
        default:
                printf("invalid number");
                break;
    }

    return 0;
}
