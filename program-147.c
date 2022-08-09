// break and continue in c program...
#include <stdio.h>
int main() {
    int i;

    for(i = 10; i <= 20; i++){
        if(i % 2 == 0){
            continue;
        }
        if(i > 16){
            break;
        }
        printf("%d \n", i);
    }

return 0;
}
