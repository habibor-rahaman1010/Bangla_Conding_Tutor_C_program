//array element summation in c program use pointer....

#include <stdio.h>

int main() {
    int arr[10] = {23, 45, 43, 56, 67, 74, 52, 58, 98, 75};
    int i, sum = 0;

    for(i = 0; i < 10; i++){
        sum += *(arr + i);
        printf("%d \n", *(arr + i));
    }
    printf("Total summation is: %d", sum);

return 0;
}

