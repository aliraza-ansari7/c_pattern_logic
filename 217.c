#include<Stdio.h>
int main()
{
int i,j;

for(i=1;i<=11;i++)
{
char ch='Ks';

	for(j=1;j<=11;j++)
	{
	if(j==12-i || j==i || i==1 || i==11)
		printf("%c",ch);

	else
	printf(" ");

ch--;
	}
printf("\n");
}

return 0;
}