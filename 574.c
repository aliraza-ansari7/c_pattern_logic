#include <stdio.h>

int main() {
    int n, i, j = 0, temp;
    printf("Move All Negative Numbers to the Beginning\n");
    printf("Enter size: ");
    scanf("%d", &n);

    if (n <= 0)
        return 0;

    int a[n];

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++) {
        if (a[i] < 0) {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            j++;
        }
    }

    printf("Rearranged array: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}