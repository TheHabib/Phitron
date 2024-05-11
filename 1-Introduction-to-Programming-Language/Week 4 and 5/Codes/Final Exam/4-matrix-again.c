#include<stdio.h>
int main() {
    int i, j, n, m;
    scanf("%d %d", &n, &m);
    int arr[n][m];
    for(i=0; i<n; i++) {
        for(j=0; j<m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    //print last row
    for(i=0; i<m; i++) {
        printf("%d ",arr[n-1][i]);
    }
    printf("\n");
    for(i=0; i<n; i++) {
        printf("%d ", arr[i][m-1]);
    }
    return 0;
}