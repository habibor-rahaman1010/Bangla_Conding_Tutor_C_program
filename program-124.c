// 3 level Nested for loop in c program..
#include <stdio.h>

int main() {
    int i, j, k;

    for(i = 1; i <= 2; i++){
        printf("First loop start! \n");

        for(j = 1; j <= 3; j++){
            printf("Second loop start! \n");

            for(k = 1; k <= 4; k++){
                printf("********* This is third loop! \n");
            }

            printf("Second loop Stop! \n");
        }

        printf("First loop stop! \n \n");
    }

return 0;
}

