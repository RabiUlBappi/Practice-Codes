#include<stdio.h>
main()
{
    int i,a,c=0,d,cnt=0;
    scanf("%d",&i);
    for(d=1;d<=i;d++)
    {

        for(a=2;a<=d/2;a++)
        {
            if(d%a==0)
            {
               // c=2;
               // printf("%d is not a prime number\n", d);
                break;
            }


        }
        if (a==d/2+1) /* a>i/2 or c==0*/
        {

            printf("%d is a prime number\n",d);
             cnt++;
        }

    }
printf("Total prime number is %d",cnt);

}
