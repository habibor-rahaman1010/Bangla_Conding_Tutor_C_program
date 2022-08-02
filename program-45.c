// take a n positive number from use and print is even or odd in c program...
#include <stdio.h>
int main() {
    int n;
    printf("Enter your positive integer number: ");
    scanf("%d", &n);

    if(n % 2 == 0){
        printf("%d is even number! \n", n);
    }
    else{
        printf("%d is odd number! \n", n);
    }

return 0;
}
