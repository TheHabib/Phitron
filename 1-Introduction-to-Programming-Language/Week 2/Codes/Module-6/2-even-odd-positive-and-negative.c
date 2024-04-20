#include<stdio.h>
int main() {
    int i, j, n, t, oddcount=0, evencount=0, poscount=0, negcount=0;
    scanf("%d", &t);
    for(i=0; i<t; i++) {
        scanf("%d", &n);
        if(n%2 == 0) {
            evencount += 1;
        }
        else{
            oddcount += 1;
        }
        if(n>0) {
            poscount += 1;
        }
        else if(n < 0) {
            negcount += 1;
        }
    }
    printf("Even: %d\n", evencount);
    printf("Odd: %d\n", oddcount);
    printf("Positive: %d\n", poscount);
    printf("Negative: %d\n", negcount);
    return 0;
}