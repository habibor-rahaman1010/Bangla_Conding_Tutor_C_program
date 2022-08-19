//file write operation in c program..

#include <stdio.h>

int main() {
    FILE *file_pointer;
    file_pointer = fopen("test2.txt", "a");

    // way 1 to wire in file..
    int i;
    for(i = 65; i <= 90; i++){
        fputc(i, file_pointer);
    }

     // way 2 to wire in file..
    char arr[100] = {"\nHabibor Rahaman is a good self-thought programmer!"};
    for(i = 0; i < 20; i++){
        fputs(arr, file_pointer);
    }

     // way 3 to wire in file..
     for(i = 0; i < 10; i++){
        fprintf(file_pointer, "\nMy processor is cor i%d %d", 5, 10500);
     }

    fclose(file_pointer);

return 0;
}

