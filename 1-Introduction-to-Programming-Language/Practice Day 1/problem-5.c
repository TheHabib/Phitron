#include<stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if(a>=10000) {
        printf("Gucci Bag\n");
        if(a>20000) {
            printf("Gucci Belt\n");
        }
    }
    else if(a>=5000) {
        printf("Levis Bag\n");
    }
    else{
        printf("Something\n");
    }
}