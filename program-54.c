//switch case in c program...
#include <stdio.h>

int main() {
    while(1){
        int my_case;
        printf("Enter the value of case: ");
        scanf("%d", &my_case);

        switch(my_case){
        case 1:
            printf("C++ program. \n");
            break;

        case 2:
            printf("C program. \n");
            break;

        case 3:
            printf("JavaScript program. \n");
            break;

        case 4:
            printf("Python program. \n");
            break;

        case 5:
            printf("TypeScript program. \n");
            break;

        case 6:
            printf("C Sharp program. \n");
            break;

        case 7:
            printf("Java program. \n");
            break;

        case 8:
            printf("PHP program. \n");
            break;

        case 9:
            printf("Rust program. \n");
            break;

        case 10:
            printf("Go program. \n");
            break;

        default:
            printf("Your most favorite program is C++ program. \n");

        }
    }

return 0;
}
