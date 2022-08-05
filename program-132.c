//Read an integer variable and print all of its divisors (including 1 and the number itself).
#include <stdio.h>
int main() {
    int i, n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if(0 < n && n < 100){
       for(i = 1; i <= n; i++){
            if(n % i == 0){
                printf("%d \n", i);
            }
        }
    }

return 0;
}
