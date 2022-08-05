//write a program which print 1 to n number summation in c program use do while loop...
#include <stdio.h>
 int main() {
    int i, n, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    i = 1;

    do{
        sum += i;
        i++;
    }
    while(i <= n);
    printf("Total sum is: %d \n", sum);

 return 0;
 }

