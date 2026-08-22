#include<stdio.h>
int main()
{
int i,j;

for(i=0;i<=10;i++)
{	
char ch='a';

	for(j=0;j<=13;j++)
	{ 
		if(j<=2+i || j>=1-i)
			{
				if(i==0 && j==0)
			 	printf(" ");
			} 
		   printf("%c ",ch);
			ch++;

			
		
		
		
	}


printf("\n ");
}

return 0;
}