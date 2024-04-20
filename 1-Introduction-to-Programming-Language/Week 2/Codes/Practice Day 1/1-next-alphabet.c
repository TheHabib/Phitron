#include<stdio.h>
int main() {
    char ch;
    int asciival;
    scanf("%c", &ch);
    if(ch == 'z') {
        printf("a");
    }
    else{
        asciival = (int)ch + 1;
        ch = (char)asciival;
        printf("%c\n", ch);
    }
    return 0;
}