#include<stdio.h>
int main()
{
int i,j;

for(i=1;i<=15;i++)
{	
	for(j=1;j<=15;j++)
	{ 
	 
		if(j>=i || j>=16-i)
		   printf("*");

		else
		   printf(" ");	
}

printf("\n");
}

return 0;
}
