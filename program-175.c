//two number substruction in c program with function use..
#include <stdio.h>
int get_substruction(); //this is function prototype...

int main() {
    int x = 45, y = 20;
    int result = get_substruction(x, y);
    printf("substruction is: %d", result);
return 0;
}

//this is my substruction function...
int get_substruction(int x, int y){
    int sum;
    sum = x - y;

return sum;
}
