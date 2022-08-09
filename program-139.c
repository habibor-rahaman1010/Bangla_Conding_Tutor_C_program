// number pattern loop problem in c program...
#include <stdio.h>

int main() {
    int i, j;

    for(i = 1; i <= 5; i++){
        for(j = 5; j >= i; j--){
            printf("%d ", j);
        }
        printf("\n");
    }

return 0;
}

/*  This will be the output below..
    5 4 3 2 1
    5 4 3 2
    5 4 3
    5 4
    5
*/
