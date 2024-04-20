#include<stdio.h>
int main() {
    int i, n;
    scanf("%d", &n);
    if(n>0) {
        //print 1 to n
        for(i=1; i<=n; i++) {
            printf("%d ", i);
        }
    }
    else{
        //print n to 0
        for(i=n; i<=0; i++) {
            printf("%d ", i);
        }
    }
    return 0;
}