//use my own header file in c program..

#include <stdio.h>
#include "my_header_file.h"

int main() {
    //call add function..
    int result = add(15, 30);
    printf("summation is: %d \n", result);

    //call find_max_element..
    int my_arr[10] = {23, 43, 67, 65, 43, 101, 54, 66, 88, 99};
    int max_el = find_max_element(my_arr);
    printf("Max element of is array: %d \n", max_el);


return 0;
}
