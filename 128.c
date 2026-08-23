#include<stdio.h>
int main()
{
int i,j;

for(i=1;i<=5;i++)
{
int num=10;

	for(j=1;j<=10;j++)
	{
		if(i<=j-1)
		  printf("%d",num);
		
		else
                  printf(" ");
		num--;	
	}

printf("\n");
}

return 0;
}