//write a program which print negative n number to positive n number in c program input from user...
//use different for loop;
#include <stdio.h>

int main() {
    int i, n;
    printf("Enter the value of negative n: ");
    scanf("%d", &n);
    i = n;
    for(; ;){

        printf("%d \n", i);
        i++;

        if(i > -n){
            break;
        }
    }

return 0;
}

