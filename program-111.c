// write a program which print 1 to n number summation, input from user in c program use while loop...
#include <stdio.h>

int main() {
    int i, n, sum;
    printf("Enter the value of n number: ");
    scanf("%d", &n);

    i = 1;
    while(i <= n){
        sum += i;
        i++;
    }
    printf("%d \n", sum);


return 0;
}

