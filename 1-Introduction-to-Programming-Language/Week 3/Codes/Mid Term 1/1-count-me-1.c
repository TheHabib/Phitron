#include<stdio.h>
int main() {
    int n, i, divtwo=0, divthree=0;
    scanf("%d", &n);
    int arr[n];
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] % 2 == 0) {
            divtwo += 1;
        }
        else if(arr[i] % 3 == 0) {
            divthree += 1;
        }   
    }
    printf("%d %d", divtwo, divthree);
    return 0;
}