//pointer in c program...
#include <stdio.h>

int main() {
    char x = 'H';
    char *ptr;
    ptr = &x;

    //print memory address...
    printf("Memory address is: %p \n", ptr);
    printf("Memory address is: %p \n", &x);

    //print variable value...
    printf("Memory address is: %c \n", *ptr);
    printf("Memory address is: %c \n", x);

return 0;
}

