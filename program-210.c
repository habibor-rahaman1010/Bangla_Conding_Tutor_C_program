//memory allocation by calloc in c program..
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    ptr = (int *) calloc(20, sizeof(int));

    if(ptr == NULL){
        printf("Memory not allocated! \n");
    }
    else{
        printf("Memory allocation successful! \n");
        printf("Memory address: %p \n", ptr);

        //memory clear...
        free(ptr);
        printf("Memory freed successful! \n");
    }

return 0;
}

