#include<stdio.h>
int main() {
    int n, s=0;
    scanf("%d", &n);
    for(int i=2; i<n; i=i+2) {
        s = s + (i*i);
    }
    printf("Answer: %d", s);
}