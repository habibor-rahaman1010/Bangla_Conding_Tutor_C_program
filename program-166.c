//write a program which find out max number in 2D array input from user...
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

    int max_value = number[0][0];
    for(row = 0; row < 3; row++){
        for(col = 0; col < 3; col++){
            if(number[row][col] > max_value){
                max_value = number[row][col];
            }
        }
    }
    printf("Max value is: %d", max_value);

return 0;
}
