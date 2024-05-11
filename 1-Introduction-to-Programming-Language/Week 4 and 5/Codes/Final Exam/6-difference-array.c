#include<stdio.h>
#include<stdlib.h>
int main() {
    int i, j, k, t;
    scanf("%d", &t);
    for(k=0; k<t; k++) {
        int n;
        scanf("%d", &n);
        int A[n];
        int B[n];
        int C[n];
        for(i=0; i<n; i++) {
            scanf("%d", &A[i]);
        }
        for(i=0; i<n; i++) {
            B[i] = A[i];
        }
        int tmp;
        for(i=0; i<n-1; i++) {
            for(j=i+1; j<n; j++) {
                if(A[i]>A[j]) {
                    tmp = A[i];
                    A[i] = A[j];
                    A[j] = tmp;
                }
            }
        }
        for(i=0; i<n; i++) {
            C[i] = abs(A[i] - B[i]);
            printf("%d ", C[i]);
        }
        printf("\n");
    }
    return 0;
}