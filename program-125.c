// 4 level Nested for loop in c program..
#include <stdio.h>

int main() {
    int i, j, k, m;

    for(i = 1; i <= 2; i++){
        printf("First loop start! \n");

        for(j = 1; j <= 3; j++){
            printf("Second loop start! \n");

            for(k = 1; k <= 4; k++){
                printf("Third loop start! \n");

                for(m = 1; m <= 5; m++){
                    printf("********* This is fourth loop! \n");
                }

                printf("Third loop Stop! \n");
            }

            printf("Second loop Stop! \n");
        }

        printf("First loop stop! \n \n");
    }

return 0;
}


