// array basic concept in c program...
#include <stdio.h>
int main() {
    int n[5];

    n[0] = 10;
    n[1] = 13;
    n[2] = 32;
    n[3] = 44;
    n[4] = 46;

    printf("element  1 is: %d \n", n[0]);
    printf("element  2 is: %d \n", n[1]);
    printf("element  3 is: %d \n", n[2]);
    printf("element  4 is: %d \n", n[3]);
    printf("element  4 is: %d \n", n[4]);

    int element_sum = n[0] + n[1] + n[2] + n[3] + n[4];
    printf("Element sum is: %d \n", element_sum);

    // change array variable value in an array...
    n[1] = 77;
    n[4] = 88;

    element_sum = n[0] + n[1] + n[2] + n[3] + n[4];
    printf("Element sum is: %d \n", element_sum);

return 0;
}
