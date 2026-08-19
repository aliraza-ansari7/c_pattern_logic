#include<stdio.h>
int main()
{
int i,j;

for(i=1;i<=9;i++)
{	
int num=1;
	for(j=1;j<=10;j++)
	{ 
		if(j==1 || i==9 || j==1+i) 
		   printf("%d",num);

		else
		   printf(" ");	
		
	
	}


printf("\n");
}

return 0;
}

