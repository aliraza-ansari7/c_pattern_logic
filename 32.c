#include<stdio.h>
int main()
{
int i,j,rows,space;
printf("Enter a number:");
scanf("%d",&rows);
for(i=1;i<=rows;i++)
{

	for(j=1;j<=rows;j++)
	{ 

		if(i==rows || j==rows)
		   printf("*");
		else
		   printf(" ");	

}

printf("\n");
}

return 0;
}