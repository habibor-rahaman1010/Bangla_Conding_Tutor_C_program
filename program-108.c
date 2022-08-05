// write a program which print negative even n to positive even n number input from user in c program use while loop...
#include <stdio.h>

int main() {
    int i, n;
    printf("Enter the value of n negative number: ");
    scanf("%d", &n);

    i = n;
    while(i <= -n){
        if(i % 2 == 0){
            printf("%d \n", i);
        }
        i++;
    }

return 0;
}


