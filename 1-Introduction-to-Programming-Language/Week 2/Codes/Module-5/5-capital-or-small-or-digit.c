#include<stdio.h>
int main() {
    char a;
    scanf(" %c", &a);
    if((int)a >= 48 && (int)a <= 57) {
        printf("IS DIGIT");
    }
    else if((int)a >= 65 && (int)a <= 90) {
        printf("ALPHA\nIS CAPITAL");
    }
    else if((int)a >= 97 && (int)a <= 122) {
        printf("ALPHA\nIS SMALL");
    }
    return 0;
}