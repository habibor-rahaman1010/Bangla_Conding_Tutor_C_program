//find out average in c program...
#include <stdio.h>
int main() {
    int a, b, c;
    float average;
    printf("Enter the value of a: ");
    scanf("%d", &a);

    printf("Enter the value of a: ");
    scanf("%d", &b);

    printf("Enter the value of c: ");
    scanf("%d", &c);
    printf("\n");

    average = (a + b + c) / 3;
    printf("Value of a: %d \n", a);
    printf("Value of a: %d \n", b);
    printf("Value of a: %d \n", c);
    printf("Average of a, b, and c = %.2f \n", average);

return 0;
}
