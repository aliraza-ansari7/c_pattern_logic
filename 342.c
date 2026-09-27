#include <stdio.h>
int main() {
    int n, pos, val;

    printf("Enter size: ");
    scanf("%d", &n);

    int arr[100];

  
    for(int i=0; i<n; i++) {
        printf("Enter elements at index [%d]:",i+1);
        scanf("%d", &arr[i]);
    }

    printf("Enter position: ");
    scanf("%d", &pos);
    printf("Enter value: ");
    scanf("%d",&val);
    

    for(int i=n; i>=pos; i--) {
        arr[i] = arr[i-1];
    }

    arr[pos-1] = val;
    n++;

    for(int i=0; i<n; i++) {
        printf("%d\n", arr[i]);
    }
}