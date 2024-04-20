#include<stdio.h>
int main() {
    int n, i, x, data=0, pos;
    scanf("%d", &n);
    int arr[n];
    
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &x);

    for(i = 0; i < n; i++) {
        if(arr[i] == x) {
            data = 1;
            pos = i;
            break;
        }
    }
    if(data == 1) {
        printf("%d", pos);
    }
    else{
        printf("-1");
    }

    return 0;
}