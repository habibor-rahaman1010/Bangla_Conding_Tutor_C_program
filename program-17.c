//input from user in c program....
#include <stdio.h>

int main() {
    char ch;
    printf("Enter your character: ");
    scanf("%c", &ch);

    int x;
    printf("Enter your number: ");
    scanf("%d", &x);

    float y;
    printf("Enter your float number: ");
    scanf("%f", &y);

    printf("\n");

    printf("character is: %c \n", ch);
    printf("integer is: %d \n", x);
    printf("float is: %.2f \n", y);



return 0;
}
