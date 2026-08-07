#include<stdio.h>
int main()
{
int i,j;

for(i=1;i<=6;i++)
{
int num=6;
	for(j=1;j<=6;j++)
	{
	     if(i==1 || i==6 || j==1 || j==6)
	 	printf("%d",num);
	     else
		printf(" ");
		num--;
	}
	printf("\n");
}

return 0;
}
