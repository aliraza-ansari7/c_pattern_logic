#include<stdio.h>
int main()
{
int i,j;
for(i=1;i<=5;i++)
{
int num=1;
	for(j=1;j<=10;j++)
	{
		if(j==10-i || j==i || i==1 ||i==5|| j==10)
		printf("%d",num);
		
		else
		printf(" ");
	num++;
	}
printf("\n");
}

return 0;
}