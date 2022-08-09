//write a program which find out large element of an array...
#include <stdio.h>
int main() {
    int arr[10] = {13, -14, 43, 45, 87, 65, 101, 32, 44, -10};
    int i;
    int max_value = arr[0];

    for(i = 1; i < 10; i++){
        if(arr[i] > max_value){
            max_value = arr[i];
        }
    }
    printf("Max value is: %d", max_value);

return 0;
}
