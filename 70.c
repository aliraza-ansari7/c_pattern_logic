#include<stdio.h>
int main()
{
int i,j;

for(i=1;i<=10;i++)
{	

int num=1;
	for(j=1;j<=11;j++)
	{ 
	 
		if(j<=5 || i>=6) 
		   printf("%d ",num);

		else
		   printf(" ");	

	}


printf("\n");
}

return 0;
}
