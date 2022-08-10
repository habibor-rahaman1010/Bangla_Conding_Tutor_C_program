//memory allocation by malloc in c program..
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int *) malloc(5 * sizeof(int));

    if(ptr == NULL){
        printf("Memory not allocated! \n");
    }
    else{
        printf("Memory allocation successful! \n");
        printf("Memory address: %p \n", ptr);
        printf("Before reallocate value! \n");
        ptr[0] = 31;
        ptr[1] = 45;
        ptr[2] = 53;
        ptr[3] = 66;
        ptr[4] = 77;

        for(int i = 0; ptr[i]; i++)
        printf("%d \n", ptr[i]);
        printf("\n");

        //Memory reallocate
        printf("After reallocate value! \n");
        printf("reallocate successful! \n");
        ptr = (int *) realloc(ptr, 7 * sizeof(int));
        ptr[0] = 31;
        ptr[1] = 45;
        ptr[2] = 53;
        ptr[3] = 66;
        ptr[4] = 77;
        ptr[5] = 97;
        ptr[6] = 99;

        for(int i = 0; ptr[i]; i++)
        printf("%d \n", ptr[i]);

        //memory clear...
        free(ptr);
        printf("Memory freed successful! \n");
    }

return 0;
}

