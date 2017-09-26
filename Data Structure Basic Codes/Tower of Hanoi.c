#include <stdio.h>
#include <math.h>
void hanoi(int, char, char, char);

int main()
{
 int num,moves;
printf("Enter the number of disks : ");
 scanf("%d", &num);
printf("The sequence of moves involved in the Tower of Hanoi are :\n");
hanoi(num, 'A', 'C', 'B');
moves=(pow(2,num))-1;
printf(" \n\n Number of moves =%d\n",moves);
   return 0;
}
void hanoi(int num, char frompeg, char topeg, char auxpeg)
{
    if (num == 1)
    {
        printf("\n Move disk 1 from peg %c to peg--> %c", frompeg, topeg);
        return;
    }
    hanoi(num - 1, frompeg, auxpeg, topeg);
    printf("\n Move disk %d from peg %c to peg--> %c", num, from peg, to peg);
    hanoi(num - 1, auxpeg, topeg, frompeg);
}
