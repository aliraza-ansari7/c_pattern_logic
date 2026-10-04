#include <stdio.h>
int main() {
    int n;
    printf("Enter size:");
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++) 
	{
	  printf("Enter a element:");
	  scanf("%d",&arr[i]);
	}
    printf("Leaders:\n");

    for(int i=0;i<n;i++){
        int leader=1;

        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
                leader=0;
                break;
            }
        }

        if(leader) printf("%d ",arr[i]);
    }
}