#include<Stdio.h>
int main()
{
int i,j;

for(i=0;i<=10;i++)
{
char ch='K';
	for(j=0;j<=10;j++)
	{
	if(j==10-i || j==i )
		printf("%c",ch);

		else
		printf(" ");
	ch--;
	}
printf("\n");
}

return 0;
}