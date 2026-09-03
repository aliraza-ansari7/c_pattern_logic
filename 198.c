#include <stdio.h>
int main(){
    int n = 4;

    for(int i=1; i<=n; i++){
        for(int j=i; j<n; j++) printf(" ");

        for(int j=1; j<=2*i-1; j++){
            if(j==1 || j==2*i-1){
                if(i % 2 == 1)   // odd row → alphabet
                    printf("%c", 'A' + i - 1);
                else             // even row → reverse number
                    printf("%d", n - i + 1);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

    for(int i=n-1; i>=1; i--){
        for(int j=i; j<n; j++) printf(" ");

        for(int j=1; j<=2*i-1; j++){
            if(j==1 || j==2*i-1){
                if(i % 2 == 1)
                    printf("%c", 'A' + i - 1);
                else
                    printf("%d", n - i + 1);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}