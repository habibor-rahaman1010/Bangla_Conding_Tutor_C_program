// write a program find out of n number all of divisor in c program..
#include <stdio.h>

void print_divisor(int n){
    int i;
    for(i = 1; i <= n; i++){
        if(n % i == 0){
            printf("%d \n", i);
        }
    }
}


int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    print_divisor(n);
return 0;
}
