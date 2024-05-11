#include<stdio.h>
int main() {
    int i, j, n, m, jadu=1;
    scanf("%d %d", &n, &m);
    if(n != m) {
        printf("NO\n");
    }
    else if(n == m) {

        int ar[n][m];
        for(i=0; i<n; i++) {
            for(j=0; j<m; j++) {
                scanf("%d", &ar[i][j]);
            }
        }
        for(i=0; i<n; i++) {
            for(j=0; j<m; j++) {
                if(i==j || i+j==m-1) { //diagonal position
                    if(ar[i][j] != 1) {
                        jadu=0;
                        break;
                    }
                }
                else{ //non diagonal position
                    if(ar[i][j] != 0) {
                        jadu=0;
                        break;
                    }
                }
            }
        }
        if(jadu==1) {
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    
    return 0;
}