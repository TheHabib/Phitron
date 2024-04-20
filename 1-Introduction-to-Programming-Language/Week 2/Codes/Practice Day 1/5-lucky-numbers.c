#include<stdio.h>
int main() {
    int n, d1, d2;
    scanf("%d", &n);
    d1 = n / 10;
    d2 = n - (10*d1);
    if(d1 == 0 || d2 == 0) {
        printf("YES");
    }
    else if(d1 % d2 == 0 || d2 % d1 == 0) {
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}