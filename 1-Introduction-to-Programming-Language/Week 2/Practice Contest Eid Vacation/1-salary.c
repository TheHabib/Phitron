#include<stdio.h>
int main() {
    int x;
    long long income;
    scanf("%d", &x);
    income = (long long int)x * 365;
    printf("%lld", income);
    return 0;
}