#include <stdio.h>

int main() {
    int n, i, j, temp;
    printf("Rearrange Array in Maximum-Minimum Order\n");
    printf("Enter size: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("Maximum-minimum order: ");

    int left = 0, right = n - 1;

    while (left <= right) {
        if (left != right)
            printf("%d %d ", a[right--], a[left++]);
        else
            printf("%d ", a[left++]);
    }

    return 0;
}	