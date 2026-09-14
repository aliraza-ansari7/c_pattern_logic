#include<stdio.h>
int main()
{
int x[10],largest,y;

y=0;
while(y<=9)
{
printf("Enter a number :");
scanf("%d",&x[y]);
y++;
}

largest=x[0];
y=1;
while(y<=9)
{
if(x[y]>largest)
{
largest=x[y];
}
y++;
}
printf("Largest %d\n",largest);
return 0;
}