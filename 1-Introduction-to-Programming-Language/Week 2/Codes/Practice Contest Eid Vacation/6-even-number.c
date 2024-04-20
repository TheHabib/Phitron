#include<stdio.h>
int main() {
    int n, i, sum;
    scanf("%d", &n);
    for(i = 0; i<=n; i+=2) {
        sum = i + (i+2) + (i+4) + (i+6) + (i+8);
        if(sum == n) {
           printf("%d %d %d %d %d\n", i, (i+2), (i+4), (i+6), (i+8));
           break; 
        }
        else{
            sum = 0;
        }
    }
    return 0;
}