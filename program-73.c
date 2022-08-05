//write a program witch print 1 to n numbers in c program from input user...

#include <stdio.h>

int main() {
    int i, n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i = n; i >= 1; i -= 1){
        printf("%d \n", i);
    }

return 0;
}




