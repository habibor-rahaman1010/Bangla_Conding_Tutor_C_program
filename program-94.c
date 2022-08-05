//different way to write for loop in c program...
#include <stdio.h>

int main() {
    int i = 1;
    int n = 10;
    for(; ;){
        printf("%d \n", i);
        i++;
        if(i > 10){
            break;
        }
    }
return 0;
}

