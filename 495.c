#include <stdio.h>
int main() {
    int n;
    printf("Enter array size:");
    scanf("%d", &n);

    int a[n];
    printf("Enter element:");
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);

    for(int i=0; i+1<n; i+=2) {
        int temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
    }

    for(int i=0; i<n; i++)
        printf("%d ", a[i]);

    return 0;
}g