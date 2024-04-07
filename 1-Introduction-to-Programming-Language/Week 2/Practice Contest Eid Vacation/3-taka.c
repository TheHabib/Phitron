#include<stdio.h>
int main() {
    long long x, y, mina, rina;
    scanf("%lld %lld", &x, &y);
    mina = (x+y)/2;
    rina = x - mina;
    printf("%lld %lld\n", mina, rina);
    return 0;
}