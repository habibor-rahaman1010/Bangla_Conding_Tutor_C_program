// write a program which print 1 to n number input from user in c program use while loop...
#include <stdio.h>

int main() {
    int i, n;
    printf("Enter the value of n number: ");
    scanf("%d", &n);

    i = 1;
    while(i <= n){
        printf("%d \n", i);
        i++;
    }


return 0;
}
