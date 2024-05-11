#include <stdio.h>

#define ROWS 3
#define COLS 3

void printArray(int array[][COLS], int rows, int cols) {
    printf("Array elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int myArray[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // Call the function and pass the 2D array as a parameter
    printArray(myArray, ROWS, COLS);

    return 0;
}
