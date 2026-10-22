#include <stdio.h>

int main() {
    int n, i, drops = 0;
    printf("Check Whether an Array Is a Rotation of a Sorted Array\n");
    printf("Enter size: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++) {
        if (a[i] > a[(i + 1) % n])
            drops++;
    }

    if (drops <= 1)
        printf("Yes, it is a sorted array rotation");
    else
        printf("No, it is not a sorted array rotation");

    return 0;
}