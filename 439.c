#include <stdio.h>
int main() {
    int n;
    printf("Enter array size:");
    scanf("%d",&n);

    int a[n];

    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    int temp=a[0];
    a[0]=a[n-1];
    a[n-1]=temp;

    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
}