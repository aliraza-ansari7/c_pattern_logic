#include<stdio.h>
int main()
{
int i,j;
int num=1;
for(i=1;i<=4;i++)
{

	for(j=1;j<=7;j++)
	{
		if(j>=5-i && j<=3+i)
		  printf("%d",num);
		
		else
                  printf(" ");
		
	}

printf("\n");
}

return 0;
}