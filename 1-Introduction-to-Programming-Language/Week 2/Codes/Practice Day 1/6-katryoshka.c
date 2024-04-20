#include<stdio.h>
int main() {
    long long n, m, k; //n eyes m mouths k bodies
    scanf("%lld %lld %lld", &n, &m, &k);
    long long total = 0;
    long long min;
    if(n <= m && n <= k) {
        total += n;
        m -= n;
        k -= n;
        n -= n;
    }
    else if (m <= n && m <= k) {
        total += m;
        n -= m;
        k -= m;
        m -= m;
    }
    else{
        total += k;
        n -= k;
        m -= k;
        k -= k;
    }

    if(n / 2 >= k) {
        min = k;
    }
    else{
        min = n/2;
    }
    total += min;

    printf("%lld", total);

    return 0;
}