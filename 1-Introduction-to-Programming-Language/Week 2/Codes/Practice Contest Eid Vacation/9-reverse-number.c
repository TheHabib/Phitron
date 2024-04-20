#include<stdio.h>
int main() {
    int n, tmp, v1, v2, v3, v4;
    scanf("%d", &n);
    tmp = n/1000;
    v4 = tmp;
    n = n - (1000*tmp);
    tmp = n / 100;
    v3 = tmp;
    n = n - (100*tmp);
    tmp = n / 10;
    v2 = tmp;
    n = n - (10*tmp);
    v1 = n;
    printf("%d%d%d%d\n", v1, v2, v3, v4);
    return 0;
}