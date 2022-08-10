// write a program which summation even number and odd number in array in c program input from user...
#include <stdio.h>
int main() {
    int arr[10], i, sum_even = 0, sum_odd = 0;

    printf("Enter the value of arr: ");
    for(i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
    }
    printf("\n");

    printf("Values in array: ");
    for(i = 0; i < 10; i++){
        printf("%d, ", arr[i]);
        if(arr[i] % 2 == 0){
            sum_even += arr[i];
        }
        else{
            sum_odd += arr[i];
        }
    }
    printf("\n");
    printf("Sum of Even values: %d \n", sum_even);
    printf("Sum of Odd values: %d \n", sum_odd);

return 0;
}
