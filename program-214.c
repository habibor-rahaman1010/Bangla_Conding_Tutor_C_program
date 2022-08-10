//memory allocation by calloc in c program..
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int *) calloc(5, sizeof(int));

    if(ptr == NULL){
        printf("Memory not allocated! \n");
    }
    else{
        printf("Memory allocation successful! \n");
        printf("Memory address: %p \n", ptr);
        ptr[0] = 31;
        ptr[1] = 45;
        ptr[2] = 53;
        ptr[3] = 66;
        ptr[4] = 97;

        for(int i = 0; ptr[i]; i++)
        printf("%d \n", ptr[i]);

        //memory clear...
        free(ptr);
        printf("Memory freed successful! \n");
    }

return 0;
}


