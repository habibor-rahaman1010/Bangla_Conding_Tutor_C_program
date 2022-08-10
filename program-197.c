// structure in c program...
#include <stdio.h>

struct Student {
    int id;
    char name[20];
    char email[40];
    float cgpa;
    char country[25];
}data;

int main() {
    printf("Enter your id: ");
    scanf("%d", &data.id);

    printf("Enter your name: ");
    scanf("%s", data.name);

    printf("Enter your email: ");
    scanf("%s", data.email);

    printf("Enter your cgpa: ");
    scanf("%f", &data.cgpa);

    printf("Enter your country: ");
    scanf("%s", data.country);
    printf("\n");

    printf("id: %d \n", data.id);
    printf("name: %s \n", data.name);
    printf("email: %s \n", data.email);
    printf("cgpa: %.2f \n", data.cgpa);
    printf("country: %s \n", data.country);

return 0;
}
