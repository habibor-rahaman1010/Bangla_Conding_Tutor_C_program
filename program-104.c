// write a program which print n to 1 number input from user in c program use while loop...
#include <stdio.h>

int main() {
    int i, n;
    printf("Enter the value of n number: ");
    scanf("%d", &n);

    i = n;
    while(i >= 1){
        printf("%d \n", i);
        i--;
    }


return 0;
}

