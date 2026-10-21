#include <stdio.h>

int main() {
    int n;
    printf("All Elements Greater Than Every Element to Their Right\n");
    printf("Emter array size:");
    scanf("%d", &n);

    int a[n];
    printf("Enter a element:");
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int maxRight = a[n-1];

    printf("%d ", maxRight);

    for(int i = n-2; i >= 0; i--) {
        if(a[i] > maxRight) {
            maxRight = a[i];
            printf("%d ", maxRight);
        }
    }

    return 0;
}