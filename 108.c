#include<stdio.h>
int main()
{
int i,j;

for(i=0;i<=10;i++)
{	

	for(j=0;j<=13;j++)
	{ 
		if(j<=2+i || j>=1-i)
			{
				if(i==0 && j==0)
			 	printf(" ");
			} 
		   printf("| ");

			
		
		if(j<=2+i && j>=i)
		{
			printf("*"); 
                        
		}
	}


printf("\n ");
}

return 0;
}