//use break keyword in c program...
#include <stdio.h>
int main() {
    int i, n = 10;

    for(i = 1; i < n; i++) {
        if(i == 6){
            break;
        }
        printf("%d \n", i);
    }

return 0;
}
