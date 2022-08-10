//simple calculator in c program...
#include <stdio.h>

int add(int x, int y) {
    return x + y;
}

int minus(int x, int y) {
    return x - y;
}

int multiply(int x, int y) {
    return x * y;
}

int divide(int x, int y) {
    return x / y;
}


int main() {
    int a, b;
    printf("Enter the value of x and y: ");
    scanf("%d %d", &a, &b);

    int add_result = add(a, b);
    int minus_result = minus(a, b);
    int multiply_result = multiply(a, b);
    int divide_result = divide(a, b);

    printf("sum is: %d \n", add_result);
    printf("minus is: %d \n", minus_result);
    printf("multiply is: %d \n", multiply_result);
    printf("divide is: %d \n", divide_result);

return 0;
}
