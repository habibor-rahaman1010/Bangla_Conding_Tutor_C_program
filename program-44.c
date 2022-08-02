//n number are divisible by 3 or 5 in c program
#include <stdio.h>
int main() {
    int n;
    printf("Enter the  number: ");
    scanf("%d", &n);

    if(n % 3 == 0 || n % 5 == 0){
        printf("%d number is divisible by 3 or 5 \n", n);
    }
    else{
        printf("%d number is not divisible by 3 or 5 \n", n);
    }

return 0;
}
