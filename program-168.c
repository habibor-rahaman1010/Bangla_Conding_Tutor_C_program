//write a program which summation all number in 2D array input from user...
#include <stdio.h>
int main(){
    int number[3][3];
    int row, col, sum = 0;

    printf("Enter the value of number array: ");
    for(row = 0; row < 3; row++){
        for(col = 0; col < 3; col++){
            scanf("%d", &number[row][col]);
        }
    }

    for(row = 0; row < 3; row++){
        for(col = 0; col < 3; col++){
            sum += number[row][col];
        }
    }
    printf("Total sum is: %d", sum);

return 0;
}


