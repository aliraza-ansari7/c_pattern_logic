#include<stdio.h>
int main()
{
int x[10],largest,secondlargest,y,smallest;
y=0;
while(y<=9)
{
printf("Enter a number :");
scanf("%d",&x[y]);
y++;
}
largest=x[0];
smallest=x[0];
y=1;
while(y<=9)
{
if(x[y]>largest)
{
largest=x[y];
}
if(x[y]<smallest)
{
smallest=x[y];
}
y++;
}
if(smallest==largest)
{
printf("All are same");
}
else
{
secondlargest=smallest;
y=0;
while(y<=9)
{
if(x[y]>secondlargest && x[y]!=largest)
{
secondlargest=x[y];
}
y++;
}
printf("Second largest :%d",secondlargest);
}
return 0; 
}