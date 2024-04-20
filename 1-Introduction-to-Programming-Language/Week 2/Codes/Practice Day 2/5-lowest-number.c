#include<stdio.h>
#include<limits.h>

int main() {
    int i, n, lowest, lowpos;
    scanf("%d", &n);
    int arr[n];
    lowest = INT_MAX;
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] < lowest) {
            lowest = arr[i];
            lowpos = i + 1;
        }
    }
    printf("%d %d", lowest, lowpos);
    return 0;
}