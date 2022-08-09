//for loop use on an array input from user....
#include <stdio.h>

int main() {
    int i;
    int x[10];

    printf("Enter the value of array: ");
    for(i = 0; i < 10; i++){
        scanf("%d", &x[i]);
    }
    printf("\n");

    for(i = 0; i < 10; i++){
        printf("value of index %d: %d \n", i, x[i]);
    }

return 0;
}

