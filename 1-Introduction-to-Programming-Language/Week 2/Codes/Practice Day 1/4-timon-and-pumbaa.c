#include<stdio.h>
int main() {
    int tim, pum;
    scanf("%d %d", &tim, &pum);
    if(tim - pum > 0) {
        printf("%d", tim - pum);
    }
    else{
        printf("0");
    }
    return 0;
}