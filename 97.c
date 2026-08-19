#include<stdio.h>
int main()
{
int i,j;

for(i=1;i<=9;i++)
{	
char ch='A';
	for(j=1;j<=10;j++)
	{ 
		if(j==10 || i==9 || j==10-i) 
		   printf("%c",ch);

		else
		   printf(" ");	
		
	
	}


printf("\n");
}

return 0;
}

