// array all element multiplay in c program input from user...
#include <stdio.h>
int main() {
    int i, x[10], sum = 1;

    printf("Enter the value of array: ");
    for(i = 0; i < 10; i++){
        scanf("%d", &x[i]);
    }

    for(i = 0; i < 10; i++){
        sum *= x[i];
    }
    printf("Total array element sum is: %d", sum);

return 0;
}

