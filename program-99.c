//write a program which print positive n number to negative n number in c program input from user...
#include <stdio.h>

int main() {
    int i, n;
    printf("Enter the value of positive n: ");
    scanf("%d", &n);
    i = n;
    for(; ;){

        printf("%d \n", i);
        i--;

        if(i < -n){
            break;
        }
    }

return 0;
}
