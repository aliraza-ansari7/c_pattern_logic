#include <stdio.h>
int main() {
    int n, pos;

    printf("Enter size: ");
    scanf("%d", &n);

    int arr[100];

   
    for(int i=0; i<n; i++) {
	printf("Enter elements at index[%d]:",i+1);
        scanf("%d", &arr[i]);
    }

    printf("\n\nEnter position to delete: ");
    scanf("%d", &pos);

    for(int i=pos-1; i<n-1; i++) {
        arr[i] = arr[i+1];
    }

    n--;

    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
}