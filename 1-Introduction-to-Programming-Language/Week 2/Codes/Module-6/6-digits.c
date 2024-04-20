#include<stdio.h>
int main() {
    int n, tmp, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, t, i;
    
    scanf("%d", &t);

    for(i = 0; i < t; i++) {
        tmp= 0;
        v1=0, v2=0, v3=0, v4=0, v5=0, v6=0, v7=0, v8=0, v9=0, v10=0;

        scanf("%d", &n);

        if(n >= 0 && n <= 9) {
            tmp = n;
            printf("%d\n", tmp);
        }
        else if(n >= 10 && n <= 99) {
            tmp = n / 10;
            v2 = tmp;
            n = n - (10*tmp);
            v1 = n;
            printf("%d %d\n", v1, v2);
        }
        else if(n >= 100 && n <= 999) {
            tmp = n / 100;
            v3 = tmp;
            n = n - (100*tmp);
            tmp = n / 10;
            v2 = tmp;
            n = n - (10*tmp);
            v1 = n;
            printf("%d %d %d\n", v1, v2, v3, v4);
        }
        else if(n >= 1000 && n <= 9999) {
            tmp = n/1000;
            v4 = tmp;
            n = n - (1000*tmp);
            tmp = n / 100;
            v3 = tmp;
            n = n - (100*tmp);
            tmp = n / 10;
            v2 = tmp;
            n = n - (10*tmp);
            v1 = n;
            printf("%d %d %d %d\n", v1, v2, v3, v4);
        }
        else if(n >= 10000 && n <= 99999) {
            tmp = n/10000;
            v5 = tmp;
            n = n - (10000*tmp);
            tmp = n/1000;
            v4 = tmp;
            n = n - (1000*tmp);
            tmp = n / 100;
            v3 = tmp;
            n = n - (100*tmp);
            tmp = n / 10;
            v2 = tmp;
            n = n - (10*tmp);
            v1 = n;
            printf("%d %d %d %d %d\n", v1, v2, v3, v4, v5);
        }
        else if(n >= 100000 && n <= 999999) {
            tmp = n/100000;
            v6 = tmp;
            n = n - (100000*tmp);
            tmp = n/10000;
            v5 = tmp;
            n = n - (10000*tmp);
            tmp = n/1000;
            v4 = tmp;
            n = n - (1000*tmp);
            tmp = n / 100;
            v3 = tmp;
            n = n - (100*tmp);
            tmp = n / 10;
            v2 = tmp;
            n = n - (10*tmp);
            v1 = n;
            printf("%d %d %d %d %d %d\n", v1, v2, v3, v4, v5, v6);
        }
        else if(n >= 1000000 && n <= 9999999) {
            tmp = n/1000000;
            v7 = tmp;
            n = n - (1000000*tmp);
            tmp = n/100000;
            v6 = tmp;
            n = n - (100000*tmp);
            tmp = n/10000;
            v5 = tmp;
            n = n - (10000*tmp);
            tmp = n/1000;
            v4 = tmp;
            n = n - (1000*tmp);
            tmp = n / 100;
            v3 = tmp;
            n = n - (100*tmp);
            tmp = n / 10;
            v2 = tmp;
            n = n - (10*tmp);
            v1 = n;
            printf("%d %d %d %d %d %d %d\n", v1, v2, v3, v4, v5, v6, v7);
        }
        else if(n >= 10000000 && n <= 99999999) {
            tmp = n/10000000;
            v8 = tmp;
            n = n - (10000000*tmp);
            tmp = n/1000000;
            v7 = tmp;
            n = n - (1000000*tmp);
            tmp = n/100000;
            v6 = tmp;
            n = n - (100000*tmp);
            tmp = n/10000;
            v5 = tmp;
            n = n - (10000*tmp);
            tmp = n/1000;
            v4 = tmp;
            n = n - (1000*tmp);
            tmp = n / 100;
            v3 = tmp;
            n = n - (100*tmp);
            tmp = n / 10;
            v2 = tmp;
            n = n - (10*tmp);
            v1 = n;
            printf("%d %d %d %d %d %d %d %d\n", v1, v2, v3, v4, v5, v6, v7, v8);
        }
        else if(n >= 100000000 && n <= 999999999) {
            tmp = n/100000000;
            v9 = tmp;
            n = n - (100000000*tmp);
            tmp = n/10000000;
            v8 = tmp;
            n = n - (10000000*tmp);
            tmp = n/1000000;
            v7 = tmp;
            n = n - (1000000*tmp);
            tmp = n/100000;
            v6 = tmp;
            n = n - (100000*tmp);
            tmp = n/10000;
            v5 = tmp;
            n = n - (10000*tmp);
            tmp = n/1000;
            v4 = tmp;
            n = n - (1000*tmp);
            tmp = n / 100;
            v3 = tmp;
            n = n - (100*tmp);
            tmp = n / 10;
            v2 = tmp;
            n = n - (10*tmp);
            v1 = n;
            printf("%d %d %d %d %d %d %d %d %d\n", v1, v2, v3, v4, v5, v6, v7, v8, v9);
        }
        else if(n >= 1000000000 && n <= 9999999999) {
            tmp = n/1000000000;
            v10 = tmp;
            n = n - (1000000000*tmp);
            tmp = n/100000000;
            v9 = tmp;
            n = n - (100000000*tmp);
            tmp = n/10000000;
            v8 = tmp;
            n = n - (10000000*tmp);
            tmp = n/1000000;
            v7 = tmp;
            n = n - (1000000*tmp);
            tmp = n/100000;
            v6 = tmp;
            n = n - (100000*tmp);
            tmp = n/10000;
            v5 = tmp;
            n = n - (10000*tmp);
            tmp = n/1000;
            v4 = tmp;
            n = n - (1000*tmp);
            tmp = n / 100;
            v3 = tmp;
            n = n - (100*tmp);
            tmp = n / 10;
            v2 = tmp;
            n = n - (10*tmp);
            v1 = n;
            printf("%d %d %d %d %d %d %d %d %d %d\n", v1, v2, v3, v4, v5, v6, v7, v8, v9, v10);
        }
    }
    return 0;
    
}