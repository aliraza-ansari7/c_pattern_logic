#include<stdio.h>
int main()
{
int i,j;

for(i=1;i<=9;i++)
{	
char ch='A';
	for(j=1;j<=9;j++)
	{ 
	 
		if(j<=10-i && j>=i )
		   printf("%c",ch);

		else
		   printf(" ");	
ch++;
	
}

printf("\n");
}

return 0;
}