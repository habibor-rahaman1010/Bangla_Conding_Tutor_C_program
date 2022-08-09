// array all element sum in c program input from user...
#include <stdio.h>
int main() {
    int i;
    float x[10], sum = 0;

    printf("Enter the value of array: ");
    for(i = 0; i < 10; i++){
        scanf("%f", &x[i]);
    }

    for(i = 0; i < 10; i++){
        sum += x[i];
    }
    printf("Total array element sum is: %.2f", sum);

return 0;
}
