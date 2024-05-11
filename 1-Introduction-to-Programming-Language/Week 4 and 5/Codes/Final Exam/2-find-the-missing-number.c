#include<stdio.h>
int main() {
    int i, t;
    long long res;
    scanf("%d", &t);
    for(i=0; i<t; i++) {
        long long mul;
        int val1, val2, val3;
        scanf("%lld %d %d %d", &mul, &val1, &val2, &val3);
        if(mul==0) {
            printf("0\n");
        }
        else{
            res = mul / (val1*val2*val3);
            if(val1*val2*val3*res == mul) {
                printf("%lld\n", res);
            }
            else{
                printf("-1\n");
            }
        }
    }
    return 0;
}