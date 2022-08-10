//two number summation in c program with function use..
#include <stdio.h>
int get_summation(); //this is function prototype...

int main() {
    int x = 10, y = 20;
    int result = get_summation(x, y);
    printf("summation is: %d", result);
return 0;
}

//this is my summation function...
int get_summation(int x, int y){
    int sum;
    sum = x + y;

return sum;
}
