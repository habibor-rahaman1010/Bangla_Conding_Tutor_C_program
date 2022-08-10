//write a program which find out min number in 2D array input from user...
#include <stdio.h>
int main(){
    int number[3][3];
    int row, col;

    printf("Enter the value of number array: ");
    for(row = 0; row < 3; row++){
        for(col = 0; col < 3; col++){
            scanf("%d", &number[row][col]);
        }
    }

    int min_value = number[0][0];
    for(row = 0; row < 3; row++){
        for(col = 0; col < 3; col++){
            if(number[row][col] < min_value){
                min_value = number[row][col];
            }
        }
    }
    printf("Min value is: %d", min_value);

return 0;
}

