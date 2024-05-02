#include<stdio.h>
int main() {
    int t, i, j;
    scanf("%d", &t);
    for(i=0; i<t; i++) {
        int len;
        scanf("%d", &len);
        int arr[len];
        for(j=0; j<len; j++) {
            scanf("%d", &arr[j]);
        }
        int chkval, ans=0;
        scanf("%d", &chkval);
        for(j=0; j<len; j++) {
            if(arr[j] == chkval) {
                ans = 1;
                break;
            }
        }
        if(ans == 1) {
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}