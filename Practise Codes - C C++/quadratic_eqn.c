#include<stdio.h>
#include<math.h>
main()
{
    float a,b,c,d,d1,x1,x2;
    printf("Enter the value of a,b,c:\n");
    scanf("%f%f%f",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>=0)
    {
        d1=sqrt(d);
        x1=(-b+d1)/(2*a);
        {
             printf("%.02f\n",x1);
        }

         x2=(-b-d1)/(2*a);
         {
          printf("%.02f\n",x2);
         }

    }
    return 0;
}
