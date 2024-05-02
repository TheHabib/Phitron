#include<stdio.h>
int main() {
    int t, i, m1, m2, d, less;
    scanf("%d", &t);
    for(i=0; i<t; i++) {
        scanf("%d %d %d", &m1, &m2, &d);
        less = d - ((d * m1) / (m1 + m2));
        printf("%d\n", less);
    }
    return 0;
}