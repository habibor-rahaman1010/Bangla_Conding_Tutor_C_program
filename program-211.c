//memory allocation by malloc in c program..
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    ptr = (int *) malloc(5 * sizeof(int));

    if(ptr == NULL){
        printf("Memory not allocated! \n");
    }
    else{
        printf("Memory allocation successful! \n");
        printf("Memory address: %p \n", ptr);
        ptr[0] = 21;
        ptr[1] = 25;
        ptr[2] = 23;
        ptr[3] = 26;
        ptr[4] = 27;

        for(int i = 0; ptr[i]; i++)
        printf("%d \n", ptr[i]);

        //memory clear...
        free(ptr);
        printf("Memory freed successful! \n");
    }

return 0;
}

