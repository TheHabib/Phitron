#include<stdio.h>
#include<string.h>
int main() {
    int t, i, j;
    scanf("%d", &t);
    for(i=0; i<t; i++) {
        int asciival, capital=0, small=0, digits=0;
        char word[10001];

        scanf("%s", word);

        int length = strlen(word);

        for(j=0; j<length; j++) {
            asciival = (int)word[j];
            if(asciival >= 48 && asciival <= 57) {
                digits += 1;
            }
            else if(asciival >= 65 && asciival <= 90) {
                capital += 1;
            }
            else if(asciival >= 97 && asciival <= 122) {
                small += 1;
            }
        }

        printf("%d %d %d\n", capital, small, digits);
    }
    return 0;
}
