#include <stdio.h>
int main() {
    int arr[5];

  
    for(int i = 0; i < 5; i++) {
        printf("Enter element: ");
        scanf("%d", &arr[i]);
    }

    printf("Array elements are:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
}