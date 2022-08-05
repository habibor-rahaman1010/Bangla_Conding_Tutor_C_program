//write a program witch print positive n even to negative n even number input from use in c program...
#include <stdio.h>
int main() {
    int i, n;
    printf("Enter the value of positive n: ");
    scanf("%d", &n);

    for(i = n; i >= -n; i--){
        if(i % 2 == 0){
            printf("%d \n", i);
        }
    }

return 0;
}

