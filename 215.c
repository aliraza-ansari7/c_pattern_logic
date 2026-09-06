#include<Stdio.h>
int main()
{
int i,j;

for(i=1;i<=11;i++)
{
int num=1;

	for(j=1;j<=11;j++)
	{
	if(j==12-i || j==i || i==1 || i==11)
		printf("%d",num);

	else
	printf(" ");

num++;
	}
printf("\n");
}

return 0;
}