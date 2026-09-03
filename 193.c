#include <stdio.h>
int main() {
    int i, j;


    for(i = 1; i <= 3; i++) {
        for(j = 1; j <= 7; j++) {
            if((i == 1 && (j == 2 || j == 3 || j == 5 || j == 6)) ||
               (i == 2 && (j >= 1 && j <= 7)) ||
               (i == 3 && (j >= 2 && j <= 6))) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    for(i = 4; i <= 7; i++) {
        for(j = 1; j <= i-3; j++) {
            printf(" ");
        }
        for(j = 1; j <= (2*(7-i)+1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}