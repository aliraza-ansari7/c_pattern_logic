#include <stdio.h>

int main() {
    int n,i,sum=0;

    printf("Enter a number:");
    scanf("%d", &n);

    int arr[n];

    printf("enter a number:");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        sum = sum + arr[i];
    }

    printf("Total sum = %d", sum);

    return 0;
}