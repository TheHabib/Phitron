#include<stdio.h>
#include<string.h>
int main() {
    char s1[1001], s2[1001];
    int s1len, s2len;
    scanf("%s", &s1);
    scanf("%s", &s2);
    s1len = strlen(s1);
    s2len = strlen(s2);
    printf("%d %d\n", s1len, s2len);
    printf("%s %s", s1, s2);
    return 0;
}