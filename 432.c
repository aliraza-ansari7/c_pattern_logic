#include <stdio.h>
int main() {

int n;
printf("Enter array size:");
scanf("%d",&n);

int a[n];
printf("\nFind the Smallest\n");
for(int i=0;i<n;i++)
	scanf("%d",&a[i]);

int min=a[0];

for(int i=1;i<n;i++) 
{
     if(a[i]<min)
     min=a[i];
}

printf("Smallest is:%d",min);

return 0;
}