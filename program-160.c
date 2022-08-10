// write a program which take 2 array A and B form user and then there summation store an third array AB in c program...
#include <stdio.h>

int main() {
    int A[5], B[5], AB[5];
    int i;
    printf("Enter the value of A: ");

    for(i = 0; i < 5; i++){
        scanf("%d", &A[i]);
    }

    printf("Enter the value of B: ");
    for(i = 0; i < 5; i++){
        scanf("%d", &B[i]);
    }

    printf("\n");

    for(i = 0; i < 5; i++){
        AB[i] = A[i] + B[i];
        printf("%d \n", AB[i]);
    }


return 0;
}

