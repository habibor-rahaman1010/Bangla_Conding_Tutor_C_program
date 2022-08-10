// string in c program input from user scanf...
#include <stdio.h>

int main() {
    char name[15];
    printf("Enter the value of name: ");
    scanf("%s", name);
    printf("%c \n", name[0]);
    printf("%s \n", name);

    printf("/n");
    char student[15];
    printf("Enter the value of student name: ");
    scanf("%s", student);
    printf("%c \n", student[0]);
    printf("%s \n", student);

return 0;
}

