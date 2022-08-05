//write a for loop which will print summation of all the numbers which are divided by 3 and 5 between 30 to 120
#include <stdio.h>
int main() {
    int i, sum = 0;

    for(i = 30; i <= 120; i++){
        if(i % 3 == 0 && i % 5 == 0){
            sum += i;
        }
    }
    printf("Summation is: %d ", sum);

return 0;
}
