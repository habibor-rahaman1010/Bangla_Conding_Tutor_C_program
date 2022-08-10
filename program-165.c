//Take array as input from user and print average of all the values in c program....
#include <stdio.h>
int main() {
    int arr[3][3];
    int row, col, sum = 0;
    float avg;

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
            sum += arr[row][col];
        }
        printf("\n");
    }
    printf("\n");

    avg = sum / (3.0 * 3.0);
    printf("Values of average is: %.2f \n", avg);

return 0;
}
