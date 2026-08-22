#include<stdio.h>
int main()
{
int i,j;

for(i=1;i<=4;i++)
{
int no=1;

	for(j=1;j<=7;j++)
	{
		if(j==5-i || j==3+i)
		  printf("%d",no);
		
		else
                  printf(" ");
		no++;
	}

printf("\n");
}

return 0;
}