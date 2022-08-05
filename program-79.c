//write a program witch print n even number input from use in c program...
#include <stdio.h>
int main() {
    int i, n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i = 2; i <= n; i += 2){
        printf("%d \n", i);
    }

return 0;
}

