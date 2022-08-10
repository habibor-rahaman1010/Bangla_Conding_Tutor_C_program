// 2D array in c program...

#include <stdio.h>
int main() {
    int A[3][3] = {
        12, 15, 18,
        11, 16, 19,
        13, 14, 17
    };

    printf("This position value is: %d \n", A[0][0]);
    printf("This position value is: %d \n", A[1][2]);
    printf("This position value is: %d \n", A[2][0]);
    printf("This position value is: %d \n", A[2][1]);
    printf("This position value is: %d \n", A[2][2]);
    printf("This position value is: %d \n", A[1][1]);

    int x = A[0][1] + A[2][1];
    printf("sum is: %d \n", x);

    int n = A[1][0] + A[1][2];
    printf("sum is: %d \n", n);

    int z = A[1][1] + A[2][2];
    printf("sum is: %d \n", z);

return 0;
}

