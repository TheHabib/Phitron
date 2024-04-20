#include<stdio.h>
int main() {
    int pwd = 1999, n;
    while(pwd=1999) {
        scanf("%d", &n);
        if(n == pwd) {
            printf("Correct\n");
            break;
        }
        else{
            printf("Wrong\n");
        }
    }
    return 0;
}

//also can use while(scanf() != EOF)