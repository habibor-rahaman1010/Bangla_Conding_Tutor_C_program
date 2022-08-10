//infinite loop use in string and find out null character in c program..
#include <stdio.h>

int main() {
    char name[] = "Habibor Rahaman";

    int i;
    while(1){
        printf("%d -- %c \n", i, name[i]);
        if(name[i] == '\0'){
            break;
        }
        i++;
    }

return 0;
}

