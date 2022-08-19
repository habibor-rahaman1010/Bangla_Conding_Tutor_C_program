//array element summation in c program use pointer....

#include <stdio.h>

int main() {
    int arr[10] = {23, 45, 43, 56, 67, 74, 52, 58, 98, 75};
    int *ptr = arr;
    int i, sum = 0;

    for(i = 0; i < 10; i++){
        sum += *(ptr + i);
        printf("%d \n", *(ptr + i));  //initial value of *ptr is 0 index memory point then *(ptr + i), ptr value increment to 1 and so on....
    }
    printf("Total summation is: %d", sum);

return 0;
}
