//for loop use on an array....
#include <stdio.h>

int main() {
    int i;
    int x[10] = {32, 44, 56, 76, 82, 13, 47, 54, 34, 23};

    for(i = 0; i < 10; i++){
        printf("value of index %d: %d \n", i, x[i]);
    }

return 0;
}
