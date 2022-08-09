//write a program which will take an integer n from user and print all the numbers between
// n to -32 stop your program when user input n = -1;

#include <stdio.h>
int main() {
    int i, n;

    while(1){
        printf("Enter the value of n (0 to exit): ");
        scanf("%d", &n);
        if(n == 0){
            break;
        }
        else if(n > -32){
            for(i = n; i >= -32; i--){
                printf("%d \n", i);
            }
        }
        else{
            for(i = n; i <= -32; i++){
                printf("%d \n", i);
            }
        }

    }

return 0;
}
