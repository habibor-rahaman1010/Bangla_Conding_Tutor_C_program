//write a program which print 5 to 25 square value summation in c program...
#include <stdio.h>
int main() {
    int i, sum = 0, square = 0;

    for(i = 5; i <= 25; i++){
        square = (i * i);
        sum = sum + square;
    }
    printf("5 to 25 square summation is: %d", sum);

return 0;
}
