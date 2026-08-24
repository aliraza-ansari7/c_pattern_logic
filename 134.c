#include<stdio.h>
int main()
{
int i,j;

for(i=1;i<=10;i++)
{
char ch='A';

	for(j=1;j<=11;j++)
	{
		if(j<=4 || j>=8)
		  printf("%c",ch);
		
		else
                  printf("-");
		
		
		}
	
	

printf("\n");
}

return 0;
}