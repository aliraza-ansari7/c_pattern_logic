#include<stdio.h>
int main()
{
int x[10],y,lookfor,count;
y=0;
while(y<=9)
{
printf("Enter a number:");
scanf("%d",&x[y]);
y++;
}

printf("Enter a number to search and count:");
scanf("%d",&lookfor);
count=0;
y=0;
while(y<=9)
{
if(lookfor==x[y])
{
count++;
}
y++;
}
printf("Searched %d\n",lookfor);
printf("The count is %d\n",count);
return 0;
}
