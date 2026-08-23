#include<stdio.h>
int main()
{
int i,j;

for(i=1;i<=5;i++)
{
char ch='A';

	for(j=1;j<=10;j++)
	{
		if(i<=j-1)
		  printf("%c",ch);
		
		else
                  printf(" ");
			
	}

printf("\n");
}

return 0;
}