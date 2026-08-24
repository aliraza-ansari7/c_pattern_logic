#include<stdio.h>
int main()
{
int i,j;

for(i=1;i<=10;i++)
{

char ch='a';
	for(j=1;j<=11;j++)
	{
		
		if(j>=4 && j<=8)
		  printf("%c",ch);
		
		else
                  printf("-");

		ch++;
		}
	
	

printf("\n");
}

return 0;
}