#include<stdio.h>
int main()
{
int i,j,num=1;
for(i=1;i<=4;i++)
{


	for(j=1;j<=9;j++)
	{
	   if(j<=9-i && j>=i)
		printf("%d",num);
	
	   else
		printf(" ");
	
	}

        printf("\n");
}


for(i=1;i<=4;i++)
{
char ch='A';
	for(j=1;j<=9;j++)
	{
	   if(j>=5-i && j<=4+i)
		printf("%c",ch);
	
	   else
		printf(" ");
	
	}

        printf("\n");
}

return 0;
}