#include <stdio.h>

int main() {
    int i, j;

    // upper
    for(i = 1; i <= 4; i++) {
        for(j = 1; j <= i; j++)
            printf("*");

        for(j = 1; j <= 2*(4-i); j++)
            printf(" ");

        for(j = 1; j <= i; j++)
            printf("*");

        printf("\n");
    }

    // lower
    for(i = 4; i >= 1; i--) {
        for(j = 1; j <= i; j++)
            printf("*");

        for(j = 1; j <= 2*(4-i); j++)
            printf(" ");

        for(j = 1; j <= i; j++)
            printf("*");

        printf("\n");
    }

    return 0;
}