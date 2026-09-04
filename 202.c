#include<Stdio.h>
int main()
{
int i,j;

for(i=0;i<=10;i++)
{
int num=1;
	for(j=0;j<=10;j++)
	{
	if(j<=10-i || j<=i)
		printf("%d",num);

		else
		printf(" ");
	num++;
	}
printf("\n");
}

return 0;
}