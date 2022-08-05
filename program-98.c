//different way to write for loop in c program...
//find out even number in c program input from user..
#include <stdio.h>

int main() {
    int i = 1, n;
    printf("Enter the value of n: ");
    scanf("%d", & n);


    for(; ;){
       if(i % 2 != 0){
         printf("%d \n", i);
       }
        i++;
        if(i > n){
            break; // or you use here return;
        }
    }
return 0;
}




