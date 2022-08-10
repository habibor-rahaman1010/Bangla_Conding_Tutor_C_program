//pointer in c program...
#include <stdio.h>

int main() {
    int x = 14;
    int *ptr;
    ptr = &x;

    //print memory address...
    printf("Memory address is: %p \n", ptr);
    printf("Memory address is: %p \n", &x);

    //print variable value...
    printf("Memory address is: %d \n", *ptr);
    printf("Memory address is: %d \n", x);

return 0;
}
