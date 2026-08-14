#include<stdio.h>
int main()
{
int i,j;

for(i=1;i<=10;i++)
{	
char ch='J';
	for(j=1;j<=10;j++)
	{ 
	 
		if(j>=11-i)
		   printf("%c",ch);

		else
		   printf(" ");	
ch--;	
}

printf("\n");
}

return 0;
}
