#include<stdio.h>
int main() {
    int tiger, pathaan, t, n, i, j;
    scanf("%d", &t);
    for(i=0; i<t; i++) {
        tiger=0;
        pathaan=0;
        scanf("%d", &n);
        char match[n];
        for(j=0; j<n; j++) {
            scanf(" %c", &match[j]);
            if(match[j] == 'T') {
                tiger += 1;
            }
            else if(match[j] == 'P') {
                pathaan += 1;
            }
        }
        if(tiger>pathaan) {
            printf("Tiger\n");
        }
        else if(pathaan>tiger) {
            printf("Pathaan\n");
        }
        else{
            printf("Draw\n");
        }
    }
    return 0;
}