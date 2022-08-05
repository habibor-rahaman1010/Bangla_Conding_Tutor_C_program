//write a program witch print negative n to positive n numbers in c program input from user....
#include <stdio.h>

int main() {
    int i, n;
    printf("Enter the value of negative n: ");
    scanf("%d", &n);

    for(i = n; i <= -n; i++){ // -n and input -n = (--) = +
        printf("%d \n", i);
    }

return 0;
}

