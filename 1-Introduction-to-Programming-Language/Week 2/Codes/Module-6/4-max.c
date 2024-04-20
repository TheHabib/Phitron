#include<stdio.h>
int main() {
    int t, n, max=0;
    scanf("%d", &t);
    while(t--) {
        scanf("%d", &n);
        if(n > max) {
            max = n;
        }
    }
    printf("%d\n", max);
    return 0;
}