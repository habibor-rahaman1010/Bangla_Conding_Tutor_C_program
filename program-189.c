//write a program which counting sting length in c program..
#include <stdio.h>

int main() {
    char name[20];
    printf("Enter the your name: ");
    scanf("%s", name);

    int i = 0, count = 0;
    while(1){
        if(name[i] == '\0'){
            break;
        }
        count++;
        i++;
    }
    printf("String length is: %d", count);

return 0;
}
