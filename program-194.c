// string length find out use built in function in c program...
#include <stdio.h>
#include <string.h>

int main() {
    char name[] = "Google";
    char name2[] = "Bangladesh";

    int x = strcmp(name, name2);
    printf("value of x is: %d \n", x);

    if(x == 0){
        printf("String is equal");
    }
    else{
         printf("String is not equal");
    }

return 0;
}


