#include<stdio.h>
int main() {
    int n, i, val, possum=0, negsum=0;
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d", &val);
        if(val<0) {
            negsum += val;
        }
        else{
            possum += val;
        }
    }
    printf("%d %d", possum, negsum);

    return 0;
}