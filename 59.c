#include<stdio.h>
int main()
{
int i,j;

for(i=1;i<=10;i++)
{	
int num=1;
	for(j=1;j<=10;j++)
	{ 
	 
		if(j>=i || j>=11-i)
		   printf("%d",num);

		else
		   printf(" ");
num++;	
}

printf("\n");
}

return 0;
}
