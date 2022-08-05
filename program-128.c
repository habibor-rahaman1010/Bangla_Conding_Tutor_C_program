//pattern in c program...
#include <stdio.h>
int main() {
    int i, j;

    for(i = 1; i <= 5; i++){

        for(j = i; j <= 5; j++){
            printf(" *");
        };
        printf("\n");
    }

return 0;
}

/**
 out put is:
 * * * * *
 * * * *
 * * *
 * *
 *

*/


