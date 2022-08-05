//write a program which print positive n to negative n number in c program use do while loop...
#include <stdio.h>
 int main() {
    int i, n;
    printf("Enter the value of n positive number: ");
    scanf("%d", &n);
    i = n;

    do{
        printf("%d \n", i);
        i--;
    }
    while(i >= -n);

 return 0;
 }

