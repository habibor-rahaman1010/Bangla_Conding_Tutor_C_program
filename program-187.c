//write a program which print to you geting sting in c program..
#include <stdio.h>

int main() {
    char name[20];
    printf("Enter the your name: ");
    gets(name);

    printf("Hello! %s \n", name);

return 0;
}
