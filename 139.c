#include<stdio.h>
int main()
{
int i,j;

for(i=1;i<=10;i++)
{

int num=8;
	for(j=1;j<=11;j++)
	{
		
		if(j>=4 && j<=8)
		  printf("%d",num);
		
		else
                  printf("-");

		num--;
		}
	
	

printf("\n");
}

return 0;
}