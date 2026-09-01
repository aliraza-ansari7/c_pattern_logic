#include<stdio.h>
int main()
{
int i,j;
for(i=1;i<=5;i++)
{
char ch='a';

	for(j=1;j<=9;j++)
	{
		if(j==10-i || j==i || j==1 || j==9)
		printf("%c",ch);
		
		else
		printf(" ");
	
	}
printf("\n");
}

return 0;
}