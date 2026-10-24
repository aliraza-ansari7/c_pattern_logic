#include <stdio.h>

int main() {
    int n, i, j, rank;
    printf("Every Element with Its Rank\n");
    printf("Enter size: ");
    scanf("%d", &n);

    int a[n], result[n];

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++) {
        rank = 1;

        for (j = 0; j < n; j++) {
            if (a[j] < a[i])
                rank++;
        }

        result[i] = rank;
    }

    printf("Ranks: ");
    for (i = 0; i < n; i++)
        printf("%d ", result[i]);
   
    return 0;
}