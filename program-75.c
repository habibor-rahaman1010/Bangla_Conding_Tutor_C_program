//write a program witch print positive n to negative n numbers in c program input from user...

#include <stdio.h>

int main() {
    int i, n;
    printf("Enter the value of positive n: ");
    scanf("%d", &n);

    for(i = n; i >= -n; i--){ // -n and input n = (-+) = -
        printf("%d \n", i);
    }

return 0;
}
