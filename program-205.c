//write a program which find out large number use by pointer in c program....
#include <stdio.h>

int main() {
    int x, y, z;
    x = 10;
    y = 25;
    z = 15;

    int *ptr1, *ptr2, *ptr3;
    ptr1 = &x;
    ptr2 = &y;
    ptr3 = &z;

    if(*ptr1 > *ptr2 && *ptr1 > *ptr3){
        printf("Large number is: %d", *ptr1);
    }
    else if(*ptr2 > *ptr1 && *ptr2 > *ptr3){
        printf("Large number is: %d", *ptr2);
    }
    else{
        printf("Large number is: %d", *ptr3);
    }


return 0;
}
