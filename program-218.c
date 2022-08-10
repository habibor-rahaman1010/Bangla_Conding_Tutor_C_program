// Program to calculate the sum of n numbers entered by the user use pointer and calloc..
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, *ptr, sum = 0;
    printf("Enter number of element: ");
    scanf("%d", &n);
    ptr = (int *) calloc(n, sizeof(int));

    //if memory can not be allocate..
    if(ptr == NULL){
        printf("Error! memory not allocated.");
        exit(0);
    }
    else{
        printf("Enter element: ");
        for(i = 0; i < n; i++){
            scanf("%d", ptr + i);
            sum += *(ptr + i);
        }
        printf("Total sum is: %d", sum);
    }
    //freed the memory
    free(ptr);

return 0;
}
