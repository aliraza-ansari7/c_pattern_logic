#include<stdio.h>
int main()
{
int avj,sum,i;
int marks[5];
sum=0;
for(i=0;i<=4;i++)
{
printf("Enter a marks:");
scanf("%d",&marks[i]);
}
for(i=0;i<=4;i++)
{
sum=sum+marks[i];
}
avj=sum/5;

printf("Avj marks:%d",avj);

return 0;
}