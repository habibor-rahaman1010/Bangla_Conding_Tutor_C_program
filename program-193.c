// string copy use built in function in c program...
#include <stdio.h>
#include <string.h>

int main() {
    char name[] = "Bangladesh";
    char name2[] = "Google";

    strcpy(name, name2);
    printf("String is: %s \n", name);
    printf("String is: %s \n", name2);

return 0;
}

