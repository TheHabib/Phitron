#include<stdio.h>
int main() {
    long long a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);
    if(a <= b && a <= c) {
        if(b >= c) {
            printf("%lld %lld", a, b);
        }
        else{
            printf("%lld %lld", a, c);
        }
    }
    else if(b <= a && b <= c) {
        if(a >= c) {
            printf("%lld %lld", b, a);
        }
        else{
            printf("%lld %lld", b, c);
        }
    }
    else{
        if(a >= b) {
            printf("%lld %lld", c, a);
        }
        else{
            printf("%lld %lld", c, b);
        }
    }
    return 0;
}