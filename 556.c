
#include <stdio.h>

int main() {
    int n, k, i, j, temp;
    printf("Rotate Array Right by K Positions\n");
    printf("Enter size: ");
    scanf("%d", &n);

    if (n <= 0)
        return 0;

    int a[n];

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter K: ");
    scanf("%d", &k);

    k = ((k % n) + n) % n;

    for (i = 0; i < k; i++) {
        temp = a[n - 1];

        for (j = n - 1; j > 0; j--)
            a[j] = a[j - 1];

        a[0] = temp;
    }

    printf("Rotated array: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}