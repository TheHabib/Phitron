#include<stdio.h>
int main() {
    int a;
    long long b;
    float c;
    char d;
    scanf("%d",&a);
    scanf("%lld",&b);
    scanf("%f",&c);
    scanf(" %c",&d);
    printf("%d\n",a);
    printf("%lld\n",b);
    printf("%0.2f\n",c);
    printf("%c\n",d);
    return 0;
}