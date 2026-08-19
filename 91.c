#include<stdio.h>
int main()
{
int i,j;

for(i=1;i<=9;i++)
{	

	for(j=1;j<=10;j++)
	{ 
		if(j==1 || j==5 ) 
		   printf("|");

		if (i==1 || i==9)
		   printf ("|");

		else
		   printf(" ");	
		
	
	}


printf("\n");
}

return 0;
}

