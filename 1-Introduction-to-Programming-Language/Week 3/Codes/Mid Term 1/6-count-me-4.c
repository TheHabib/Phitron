#include<stdio.h>
#include<string.h>
int main() {
    char word[10001];
    scanf("%s", word);
    int length = strlen(word);
    int frequency[26] = {0};
    for(int i=0; i<length; i++) {
        /* if(word[i] == 'a') {
            frequency[0] += 1;
        }
        else if(word[i] == 'b'); */
        frequency[(int)word[i] - 97] += 1;
    }
    for(int i=0; i<26; i++) {
        if(frequency[i] > 0) {
            printf("%c - %d\n", (char)(i+97), frequency[i]);
        }
    }
    return 0;
}