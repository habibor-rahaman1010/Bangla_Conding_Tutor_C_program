// write a program which print positive even n to negative even n number input from user in c program use while loop...

#include <stdio.h>

int main() {
    int i, n;
    printf("Enter the value of n positive number: ");
    scanf("%d", &n);

    i = n;
    while(i >= -n){
        if(i % 2 == 0){
            printf("%d \n", i);
        }
        i--;
    }

return 0;
}

