// write a program which print even number use continue in c program..
#include <stdio.h>

int main() {
    int i, n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        if(i % 2 != 0){
            continue;
        }
        printf("%d \n", i);
    }

return 0;
}
