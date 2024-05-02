#include<stdio.h>
int main() {
    int concount=0;
    char word[100001];
    for(int i=0; i>=0; i++) {
        if(scanf("%c", &word[i]) == EOF) {
            break;
        }
        else{
            if(word[i] != 'a' && word[i] != 'e' && word[i] != 'i' && word[i] != 'o' && word[i] != 'u') {
                concount += 1;
            }
        }
    }
    printf("%d", concount);
    return 0;
}