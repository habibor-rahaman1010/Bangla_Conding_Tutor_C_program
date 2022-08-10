//even odd function in c program...
#include <stdio.h>

void even_odd(int n){
    if(n % 2 == 0){
        printf("%d is Even! \n", n);
    }
    else{
        printf("%d is Odd \n", n);
    }
}

int main() {
    int n;
    printf("Enter the value of a and b: ");
    scanf("%d", &n);
    even_odd(n);
return 0;
}
