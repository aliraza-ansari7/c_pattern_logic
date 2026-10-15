#include <stdio.h>
int main() {
    int n, count=0, max=0;
	printf("Maximun consecutive ones\n");
    printf("Enter a array size:");
    scanf("%d", &n);

    int a[n];
	printf("Enter a elements:");
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);

    for(int i=0; i<n; i++) {
        if(a[i]==1) {
            count++;

            if(count>max)
                max=count;
        }
        else {
            count=0;
        }
    }

    printf("Maximum consecutive ones = %d", max);

    return 0;
}