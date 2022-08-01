//size of any data type in my machine in c program....
#include <stdio.h>

int main() {
    printf("Size of int byte: %zu \n", sizeof(int));
    printf("Size of long int byte: %zu \n", sizeof(long int));
    printf("Size of long long int byte: %zu \n", sizeof(long long int));
    printf("Size of short int byte: %zu \n", sizeof(short int));
    printf("Size of unsigned int byte: %zu \n", sizeof(unsigned int));
    printf("Size of unsigned long int byte: %zu \n", sizeof(unsigned long int));
    printf("Size of unsigned long long int byte: %zu \n", sizeof(unsigned long long int));

    printf("Size of float byte: %zu \n", sizeof(float));
    printf("Size of double byte: %zu \n", sizeof(double));
    printf("Size of long double byte: %zu \n", sizeof(long double));

    printf("Size of signed char byte: %zu \n", sizeof(signed char));
    printf("Size of unsigned char byte: %zu \n", sizeof(unsigned char));
    printf("Size of char byte: %zu \n", sizeof(char));


return 0;
}
