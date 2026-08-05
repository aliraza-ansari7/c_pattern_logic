#include<stdio.h>
int main()
{
int i,j,k,rows,space;

printf("Enter number of rows:");
scanf("%d",&rows);

space=rows;
for(i=1;i<=rows;i++)
{
	for(j=1;j<=space-1;j++)
	    printf(" ");
	for(k=1;k<=2*i-1;k++)
	{
	    if(k==1 || k==2*i-1 || i==rows)
		printf("*");
	    else 
 		printf(" ");
	}
	space--;
	printf("\n");
}

return 0;
}