//write a program which number of summation 3 use by pointer in c program....
#include <stdio.h>

int main() {
    int x, y, z, sum;
    x = 10;
    y = 25;
    z = 15;

    int *ptr1, *ptr2, *ptr3, *result;
    ptr1 = &x;
    ptr2 = &y;
    ptr3 = &z;
    result = &sum;

    *result = (*ptr1 + *ptr2 + *ptr3);
    printf("Summation is: %d", *result);

return 0;
}


