//read all data from a file in c program use pointer...

#include <stdio.h>

int main() {
    FILE *fp;
    fp = fopen("data.txt", "r");
    int c;

    int vCounter = 0, cCounter = 0, sCounter = 0, lCounter = 0;

    while(1){
        c = fgetc(fp);
        if(c == EOF){
            break;
        }
        else{
            printf("%c", c);
            if(c == 32){
                sCounter++;
            }
            else if(c == 10){
                lCounter++;
            }
            else if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                vCounter++;
            }
            else if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                vCounter++;
            }
            else{
                cCounter++;
            }
        }
    }

    printf("Total word is: %d \n", sCounter + (lCounter -1));
    printf("Total space is: %d \n", sCounter);
    printf("Total new line is: %d \n", lCounter - 1);
    printf("Total vowel is: %d \n", vCounter);
    printf("Total consonant is: %d \n", cCounter);



return 0;
}
