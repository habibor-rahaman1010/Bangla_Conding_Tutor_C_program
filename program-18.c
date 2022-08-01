//input from user in c program....
#include <stdio.h>
int main() {
    int x, y;
    printf("Enter value of x and y: ");
    scanf("%d %d", &x, &y);
    printf("x = %d ---- y = %d \n", x, y);

    printf("x = %p \ny = %p", &x, &y); //print memory address;

return 0;
}
