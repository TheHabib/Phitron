#include<stdio.h>
int main() {
    int x, rem, sum=0;
    scanf("%d", &x);
    if(x<=3) {
        printf("%d", x);
    }
    else{
        for(int i = 0; i<x; i++) {
            rem = x % 3;
            if(rem != 0 && rem <= 3) {
                printf("%d", sum + (x/3 + 1));
                break;
            }
            else if(rem == 0) {
                printf("%d", sum + (x/3));
                break;
            }
            else{
                sum = sum + (x/3);
                x = x - (x/3);
            }
        }
    }
    return 0;
}