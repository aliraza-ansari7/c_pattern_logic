#include<stdio.h>
int main()
{
int i,j;

for(i=1;i<=12;i++)
{	
int num=1;
	for(j=1;j<=12;j++)
	{ 
	 
		if(j<=i || i>=7) 
		   printf("%d ",num);

		else
		   printf(" ");	
	}


printf("\n");
}

return 0;
}

