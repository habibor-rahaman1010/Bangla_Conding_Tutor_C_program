//write a program witch print negative n even to positive n even number input from use in c program...
#include <stdio.h>
int main() {
    int i, n;
    printf("Enter the value of negative n: ");
    scanf("%d", &n);

    for(i = n; i <= -n; i++){
        if(i % 2 == 0){
            printf("%d \n", i);
        }
    }

return 0;
}


