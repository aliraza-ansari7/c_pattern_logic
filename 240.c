#include <stdio.h>
int main() {
    int arr[5];



    for(int i = 0; i < 5; i++) {
	printf("Enter a numbers:");
        scanf("%d", &arr[i]);
    }

    printf("Reverse array:\n");

    for(int i = 4; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}