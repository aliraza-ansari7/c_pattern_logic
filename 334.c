#include <stdio.h>
int main() {
    int n, even=0, odd=0;

    printf("Enter array size:");
    scanf("%d", &n);

    int arr[n];

    
    for(int i=0; i<n; i++)
    {
	printf("Enter elements:");
        scanf("%d", &arr[i]);

        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even = %d\nOdd = %d", even, odd);
}