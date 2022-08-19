//array all elements sum in c program use pointer...
#include <stdio.h>

int arraySum(int *arr, int len) {
    int total_sum = 0, i;
    for(i = 0; i < len; i++){
        total_sum += *(arr + i);
    }

    return total_sum;
}


int main() {
    int arr[10] = {12, 32, 34, 56, 65, 74, 50, 40, 90, 100};
    int length = sizeof(arr) / sizeof(arr[10]);
    int sum = arraySum(arr, length);
    printf("Total sum of array is: %d", sum);

return 0;
}
