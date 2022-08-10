//write a program which find out odd number in 2D array input from user...
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

    printf("----Here is odd number---- \n");
    for(row = 0; row < 3; row++){
        for(col = 0; col < 3; col++){
            if(number[row][col] % 2 != 0){
                printf("%d \n", number[row][col]);
            }
        }
    }

return 0;
}





