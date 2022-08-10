//two number multiplication in c program with function use..
#include <stdio.h>
int get_multiplication(); //this is function prototype...

int main() {
    int x = 45, y = 2;
    int result = get_multiplication(x, y);
    printf("multiplication is: %d", result);
return 0;
}

//this is my multiplication function...
int get_multiplication(int x, int y){
    int sum;
    sum = x * y;

return sum;
}

