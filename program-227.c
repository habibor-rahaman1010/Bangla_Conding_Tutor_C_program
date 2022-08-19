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
    printf("Total summation is: %d \n", sum);


    //concept clear to up...
    int arr2[5] = {43, 44, 12, 65, 55};
    int *ptr2 = arr2; // this point to array fist element or point to index 0, store in *ptr2, and arr2 before & sine is not need..
    int *ptr3 = &arr2[2]; //this point to array index 2, store in *ptr3 and arr2 before & sine is need...

    printf("value of arr2: %d \n", *(ptr2)); //ptr2 initial index value is 0;
    printf("value of arr2: %d \n", *(ptr2 + 1));  //(0 + 1) index value is 1;
    printf("value of arr2: %d \n", *(ptr2 + 2));  //(0 + 2) index value is 2;
    printf("value of arr2: %d \n", *(ptr2 - 0)); // (0 - 0) index value is 0

    printf("\n");
    //use *ptr3....
    printf("value of arr2: %d \n", *(ptr3)); //ptr3 initial index value is 2;
    printf("value of arr2: %d \n", *(ptr3 + 1));  //(2 + 1) index value is 3;
    printf("value of arr2: %d \n", *(ptr3 + 2));  //(2 + 2) index value is 4;
    printf("value of arr2: %d \n", *(ptr3 - 0)); // (2 - 0) index value is 2


return 0;
}
