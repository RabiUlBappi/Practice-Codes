#include<stdio.h>
#include<string.h>
#include<conio.h>

int main()
{
	int arra[26];
	int i,j,l;
	char str[100];
	printf("Enter your string:\n");
	gets(str);
	for(j=0;j<26;j++)
		arra[j]=0;

	for(i=0;i<strlen(str);i++)
	{

		for(j=0;j<26;j++)
			if((str[i]-97) == j)
			{
				arra[j]++;
				break;
			}

	}

	for(j=0;j<26;j++)
	    if(arra[j] != 0)
               printf("%c occurs %d times \n",j+97,arra[j]);

     getch();
     return 0;
}
