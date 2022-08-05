//write a program which print n to 1 number in c program use do while loop...
#include <stdio.h>
 int main() {
    int i, n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    i = n;

    do{
        printf("%d \n", i);
        i--;
    }
    while(i >= 1);

 return 0;
 }

