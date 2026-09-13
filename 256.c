#include<stdio.h>
int main()
{
int x[5],total,y;
y=0;
while(y<=4)
{
printf("Enter a number:");
scanf("%d",&x[y]);
y++;
}
y=0;
total=0;
while(y<=4)
{
total=total+x[y];
y++;
}
printf("Sum is %d",total);
return 0;
}