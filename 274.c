#include<stdio.h>
int main()
{
int x[10],y,lookfor,found;
y=0;
while(y<=9)
{
printf("Enter a number :");
scanf("%d",&x[y]);
y++;
}
printf("Enter a number to search:");
scanf("%d",&lookfor);
found=0;
y=0;
while(y<=9)
{
if(lookfor==x[y])
{
found=1;
break;
}
y++;
}
if(found==0)
{
printf("%d not found\n",lookfor);
}
else
{
printf("%d Found\n",lookfor);
}
return 0;
}