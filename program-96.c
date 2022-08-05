//different way to write for loop in c program...
//find out odd number in c program..
#include <stdio.h>

int main() {
    int i = 1;
    int n = 10;

    for(; ;){
       if(i % 2 != 0){
         printf("%d \n", i);
       }
        i++;
        if(i > 11){
            break;
        }
    }
return 0;
}



