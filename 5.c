#include<stdio.h>
int main()
{
int i,j;
for(i=1;i<=8;i++)
{
	for(j=1;j<=8-i;j++)
	    printf(" ");
	for(j=1;j<=2*i-1;j++)
	    printf("*");
	printf("\n");
}
for(i=8-1;i>=1;i--)
{
	for(j=1;j<=8-i;j++)
	    printf(" ");
	for(j=1;j<=2*i-1;j++)
	    printf("*");
	printf("\n");
}


return 0;
}