#include<stdio.h>
int main() {
    int n, i, j;
    scanf("%d", &n);
    for(i = 1; i <= (n*2 - 1); i++) {
        if(i%2==0){
            //print dash
            if(i<=n) {
                for(j = 1; j <= n-i; j++) {
                    printf(" ");
                }
                for(j = 1; j <= ((i*2) - 1); j++) {
                    printf("-");
                }
                printf("\n");
            }
            else if(i>n) {
                for(j = 1; j <= i - n; j++) {
                    printf(" ");
                }
                for(j = 1; j <= ((n*2) -1 -i)*2+1; j++) {
                    printf("-");
                }
                printf("\n");
            }
        }
        else{
            //print hash
            if(i<=n) {
                for(j = 1; j <= n-i; j++) {
                    printf(" ");
                }
                for(j = 1; j <= ((i*2) - 1); j++) {
                    printf("#");
                }
                printf("\n");
            }
            else if(i>n) {
                for(j = 1; j <= i - n; j++) {
                    printf(" ");
                }
                for(j = 1; j <= ((n*2) -1 -i)*2+1; j++) {
                    printf("#");
                }
                printf("\n");
            }
        }
    }
    return 0;
}