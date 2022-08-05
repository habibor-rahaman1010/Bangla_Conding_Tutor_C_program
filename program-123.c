//Nested for loop in c program..
#include <stdio.h>

int main() {
    int i, j;

    for(i = 1; i <= 3; i++){
        printf("Outer loop start! \n");
        for(j = 1; j <= 4; j++){
           printf("**************** This is inner loop! \n");
        }
        printf("Outer loop stop! \n \n");
    }

return 0;
}
