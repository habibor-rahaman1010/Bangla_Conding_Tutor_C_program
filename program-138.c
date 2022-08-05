// write a program which print n divisor use continue in c program..
#include <stdio.h>

int main() {
    int i, n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        if(n % i == 0){
            printf("%d \n", i);
            continue;
        }
    }

return 0;
}


