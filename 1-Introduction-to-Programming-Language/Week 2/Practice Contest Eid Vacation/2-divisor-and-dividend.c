#include<stdio.h>
int main() {
    int d, q, r, divisor;
    scanf("%d %d %d", &d, &q, &r);
    divisor = (d-r)/q;
    printf("%d", divisor);
    return 0;
}