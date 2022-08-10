//write a program which counting sting length in c program..
#include <stdio.h>

int main() {
    char name[20];
    printf("Enter the your name: ");
    gets(name);

    int i = 0, count = 0;
    while(name[i] != '\0'){
        count++;
        i++;
    }
    printf("String length is: %d", count);

return 0;
}


