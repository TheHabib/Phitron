#include<stdio.h>
int main() {
    char a;
    int asciival;
    scanf(" %c",&a);
    asciival = (int)a;
    if(asciival >= 97 && asciival <= 122) {
        asciival-=32;
        a = (char)asciival;
        printf("%c",a);
    }
    else if(asciival >= 65 && asciival <= 90){
        asciival+=32;
        a = (char)asciival;
        printf("%c",a);
    }
    return 0;
}