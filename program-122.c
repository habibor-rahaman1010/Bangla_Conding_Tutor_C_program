//write a program which print negative n even to positive n even number in c program use do while loop...
#include <stdio.h>
 int main() {
    int i, n;
    printf("Enter the value of n positive number: ");
    scanf("%d", &n);
    i = -n;

    do{
        if(i % 2 == 0){
           printf("%d \n", i);
        }
        i++;
    }
    while(i <= n);

 return 0;
 }



