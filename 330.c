#include<stdio.h>
int main()
{
int x[10],y,found,lookfor,count,e;

y=0;
while(y<=9)
{
printf("Enter a number:");
scanf("%d",&x[y]);
y++;
}
y=0;
while(y<=9)
{
lookfor=x[y];
found=0;
e=0;
while(e<y)
{
if(lookfor==x[e])
{
found=1;
break;
}
e++;
}
if(found==0)
{
count=1;
e=y+1;
while(e<=9)
{
if(lookfor==x[e])
{
count++;
}
e++;
}
printf("%d found %d time's\n",lookfor,count);
}
y++;
}
return 0;
}