//switch case in c program...
#include <stdio.h>

int main() {
    char my_case;
    printf("Enter the value of case: ");
    scanf("%c", &my_case);

    switch(my_case){
    case 'a':
        printf("C++ program. \n");
        break;

    case 'b':
        printf("C program. \n");
        break;

    case 'c':
        printf("JavaScript program. \n");
        break;

    case 'd':
        printf("Python program. \n");
        break;

    case 'e':
        printf("TypeScript program. \n");
        break;

    case 'f':
        printf("C Sharp program. \n");
        break;

    case 'g':
        printf("Java program. \n");
        break;

    case 'h':
        printf("PHP program. \n");
        break;

    case 'i':
        printf("Rust program. \n");
        break;

    case 'j':
        printf("Go program. \n");
        break;

    default:
        printf("Your most favorite program is C++ program. \n");

    }

return 0;
}


