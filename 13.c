#include <stdio.h>
int main() {
    int n, total=0, left=0;
    printf("Enter array size:");
    scanf("%d",&n);

    int a[n];
	printf("\nEnter a element:");
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]);
        total += a[i];
    }

    for(int i=0;i<n;i++) {

        total -= a[i];

        if(left == total) {
            printf("Equilibrium Index = %d",i);
            return 0;
        }

        left += a[i];
    }

    printf("No Equilibrium Index");
}