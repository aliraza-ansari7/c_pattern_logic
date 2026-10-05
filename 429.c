#include <stdio.h>
int main() {
    int n,flag=1;
    printf("Enter a array size");
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++){
	printf("Enter a elements");
 	scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            flag=0;
            break;
        }
    }

    if(flag) printf("Sorted");
    else printf("Not Sorted");
}