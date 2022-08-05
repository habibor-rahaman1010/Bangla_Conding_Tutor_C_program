//bit wise operator in c program..
#include <stdio.h>

int main() {
    int x[11] = {1, 2, 3, 2, 3, 1, 4, 5, 5, 6, 6};
    int res = 0;

    for(int i = 0; i < 11; i++){
        res = res ^ x[i];
    }
    printf("%d \n", res);

return 0;
}
