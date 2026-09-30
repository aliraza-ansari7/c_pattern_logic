#include <stdio.h>
int main() {
    int n, flag = 1;

    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];

    
    for(int i=0; i<n; i++) {
	printf("Enter elements at index[%d]:",i);
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<n/2; i++) {
        if(arr[i] != arr[n-i-1]) {
            flag = 0;
            break;
        }
    }

    if(flag)
        printf("Palindrome");
    else
        printf("Not Palindrome");
}