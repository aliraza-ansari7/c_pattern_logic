#include<stdio.h>
int main()
{
int i,j;

for(i=1;i<=8;i++)
{
char ch='A';
	
	for(j=1;j<=4;j++)
	{ 
	 
		if(j>=6-i && j<=9-i )
		   printf("%c",ch);

		else
		   printf(" ");	
	ch++;
}

printf("\n");
}

return 0;
}