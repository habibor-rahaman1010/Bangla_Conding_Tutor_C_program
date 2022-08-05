//write a program which print n even number in c program use do while loop...
#include <stdio.h>
 int main() {
    int i, n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    i = 1;

    do{
        if(i % 2 == 0){
           printf("%d \n", i);
        }
        i++;
    }
    while(i <= n);

 return 0;
 }


