#include <stdio.h>
int main() {
    int n;
    printf("Enter array size:");
    scanf("%d",&n);

    int a[n];
    printf("Enter array element:");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    int left=0, right=n-1;

    while(left<right) {

        while(left<right && a[left]%2!=0)
            left++;

        while(left<right && a[right]%2!=0)
            right--;

        if(left<right) {
            int temp=a[left];
            a[left]=a[right];
            a[right]=temp;

            left++;
            right--;
        }
    }

    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
}