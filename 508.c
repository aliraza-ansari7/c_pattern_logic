#include <stdio.h>

int main() {
    int n;
    printf("Find the Most Frequent Element\n");
    printf("Enter array size:");
    scanf("%d", &n);

    int a[n], maxFreq = 0, answer = 0;
    printf("Enter a element:");
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(int i = 0; i < n; i++) {
        int count = 0;

        for(int j = 0; j < n; j++) {
            if(a[i] == a[j])
                count++;
        }

        if(count > maxFreq) {
            maxFreq = count;
            answer = a[i];
        }
    }

    printf("Most frequent = %d", answer);

    return 0;
}