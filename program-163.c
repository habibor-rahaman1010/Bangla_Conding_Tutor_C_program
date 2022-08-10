//write a program which print all element within 2D array in c program...
#include <stdio.h>

int main() {
    int A[3][3] = {
        12, 15, 18,
        11, 16, 19,
        13, 14, 17
    };
    int row, col;

    for(row = 0; row < 3; row++){
        for(col = 0; col < 3; col++){
            printf("%d \n", A[row][col]);
        }
    }

return 0;
}
