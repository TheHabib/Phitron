#include<stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    if((a / 1000) % 2 == 0) {
        printf("EVEN");
    }
    else{
        printf("ODD");
    }
    return 0;
}