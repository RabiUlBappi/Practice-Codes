#include<stdio.h>
int Fibonacci(int n) {
if ( n == 0 )
	 return 0;
else if ( n == 1 )
	 return 1;
 else return ( Fibonacci(n-1) + Fibonacci(n-2) );
}

int main()
{
   int c,m,i=0;
   scanf("%d",&m);  
   printf("Fibonacci series\n");  
   for (c=1;c<=m;c++)
   {
      printf("%d\n", Fibonacci(i)); i++;
   }  
   return 0;
}  
