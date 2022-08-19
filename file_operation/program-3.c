//file read operation in c program..

#include <stdio.h>

int main() {
    FILE *file_pointer;
    file_pointer = fopen("test3.txt", "r");

    //way 1 to data read in the file....
    int c;
    c = fgetc(file_pointer);
    printf("The character is: %c \n", c);

    //way 2 data read in the file...
    char buffer[100];
    fscanf(file_pointer, "%s", buffer);
    printf("The data in buffer is: %s \n", buffer);

    //way 3 to data read in file..
    fgets(buffer, 100, file_pointer);
    printf("The data in buffer is: %s \n", buffer);

    //way 3 to data read in file..
    fgets(buffer, 100, file_pointer);
    printf("The data in buffer is: %s \n", buffer);

    fclose(file_pointer);

return 0;
}


