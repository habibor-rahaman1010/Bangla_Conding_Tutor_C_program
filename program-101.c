//write a program which print 1 to n number addition in c program...
//use different for loop in this c program..
#include <stdio.h>
int main() {
    int i = 1, n, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for( ; ; ){
        sum += i;
        i++;

        if(i > n){
            break;
        }
    }

    printf("%d", sum);
return 0;
}
