// number pattern loop problem in c program...
#include <stdio.h>

int main() {
    int i, j;

    for(i = 1; i <= 5; i++){
        for(j = i; j <= 5; j++){
            printf("%d ", j);
        }
        printf("\n");
    }

return 0;
}

/*  This will be the output below..
    1 2 3 4 5
    2 3 4 5
    3 4 5
    4 5
    5

*/

