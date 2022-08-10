//Take array as input from user and print the array in c program....
#include <stdio.h>
int main() {
    int arr[3][3];
    int row, col;

    printf("Enter the value off array: ");
    for(row = 0; row < 3; row++){
        for(col = 0; col < 3; col++){
            scanf("%d", &arr[row][col]);
        }
    }
    printf("\n");

    printf("This is my 2D array \n");
    for(row = 0; row < 3; row++){
        for(col = 0; col < 3; col++){
            printf("%d, ", arr[row][col]);
        }
        printf("\n");
    }


return 0;
}





