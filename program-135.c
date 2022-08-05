//use break keyword in c program...
#include <stdio.h>
#include <string.h>
int main() {
    int i;
    char x[10][10] = {"Habib", "Rayan", "Munic", "Dolor", "Lorem", "Ipsum"} ;
    int len = strlen(x);

    for(i = 0; i <= len; i++) {
        if(x[i] == x[3]){
            break;
        }
        printf("%s \n", x[i]);
    }

return 0;
}

