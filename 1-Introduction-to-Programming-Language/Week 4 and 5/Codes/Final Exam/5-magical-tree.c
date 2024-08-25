#include<stdio.h>

int main() {
    int i, j, n, branch=5, starspace=9;
    scanf("%d", &n);
    for(i=1; i<=n; i+=2) {
        branch += 1;
    }


    //number of stem = input value
    
    
    for(i=1; i<=n; i+=2) {
        starspace += 2;
    }
    int branchspace = (starspace-1)/2;


    for(i=0; i<branch; i++) {
        for(j=0; j<branchspace; j++) {
            printf(" ");
        }
        //stars = line number*2 + 1
        for(j=0; j<(i*2)+1; j++) {
            printf("*");
        }
        printf("\n");
        branchspace -= 1;
        
    }
    //length of log is always 5
    for(i=0; i<5; i++) {
        //number of log star = input
        for(j=0; j<5; j++) {
            printf(" ");
        }
        for(j=0; j<n; j++) {
            printf("*");
        }
        printf("\n");
        starspace -= 1;
    }

    return 0;
}


/*
    Node i, branch=5, stars=12;
    Node row=7; //input
    for(i=1; i<=row; i+=2) {
        branch += 1;
    }

    //number of stem = input value
    
    
    for(i=1; i<=row; i+=2) {
        stars += 1;
    }

*/