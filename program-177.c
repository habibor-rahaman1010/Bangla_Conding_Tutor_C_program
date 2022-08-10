//two number divided in c program with function use..
#include <stdio.h>
int get_divided(); //this is function prototype...

int main() {
    int x = 46, y = 2;
    int result = get_divided(x, y);
    printf("divided is: %d", result);
return 0;
}

//this is my divided function...
int get_divided(int x, int y){
    int sum;
    sum = x / y;

return sum;
}


