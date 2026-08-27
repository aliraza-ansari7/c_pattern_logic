#include<stdio.h>
int main()
{
int i,j;
for(i=1;i<=4;i++)
{
char ch='A';

	for(j=1;j<=9;j++)
	{
	   if(j<=9-i && j>=i)
		printf("%c",ch);
	
	   else
		printf(" ");
	ch++;
	}

        printf("\n");
}


for(i=1;i<=4;i++)
{
char ch='a';
	for(j=1;j<=9;j++)
	{
	   if(j>=5-i && j<=4+i)
		printf("%c",ch);
	
	   else
		printf(" ");
	ch++;
	}

        printf("\n");
}

return 0;
}