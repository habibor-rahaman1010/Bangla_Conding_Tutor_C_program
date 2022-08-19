//Swapping value, Pass by reference in c program..

#include <stdio.h>

void swapnum(int *n1, int *n2) {
    int temp = *(n1);
    *(n1) = *(n2);
    *(n2) = temp;
}

int main() {
    int a = 10;
    int b = 20;

    printf("A is %d and B is %d\n", a, b);
    swapnum(&a, &b);
    printf("A is %d and B is %d\n", a, b);

return 0;
}
