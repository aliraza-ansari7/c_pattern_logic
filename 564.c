#include <stdio.h>

int main() {
    int n, i, j, count = 0;

    printf("Enter size: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i] > a[j])
                count++;
        }
    }

    printf("Total inversions = %d", count);

    return 0;
}