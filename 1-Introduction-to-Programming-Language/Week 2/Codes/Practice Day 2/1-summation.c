#include<stdio.h>
int main() {
    int n, i;
    long long sum=0, val;
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%lld", &val);
        sum += val;
    }
    if(sum < 0) {
        sum *= -1;
    }
    printf("%lld", sum);
    return 0;
}