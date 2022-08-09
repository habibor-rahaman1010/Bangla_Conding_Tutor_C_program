//for loop use on an array input from user....
#include <stdio.h>

int main() {
    int i;
    float x[10];

    printf("Enter the value of array: ");
    for(i = 0; i < 10; i++){
        scanf("%f", &x[i]);
    }
    printf("\n");

    for(i = 0; i < 10; i++){
        printf("value of index %d: %.2f \n", i, x[i]);
    }

return 0;
}


