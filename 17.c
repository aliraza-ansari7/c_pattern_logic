#include<stdio.h>
int main()
{
int i,j;

for(i=1;i<=6;i++)
{
char ch='a';
	for(j=1;j<=6;j++)
	{
	     if(i==1 || i==6 || j==1 || j==6)
	 	printf("%c",ch);
	     else
		printf(" ");
		ch++;
	}
	printf("\n");
}

return 0;
}
