//if else condition in c program...
#include <stdio.h>
int main() {
    while(1){
        int age;
        printf("Enter the value of age here (exit to 0) : ");
        scanf("%d", &age);

        if(age == 0){
            break;
        }
        else if(age >= 1 && 2 >= age){
            printf("Infant \n");
        }
        else if(age >= 3 && 10 >= age){
            printf("Child \n");
        }
         else if(age >= 11 && 20 >= age){
            printf("Teenager \n");
        }
         else if(age >= 21 && 30 >= age){
            printf("Adult \n");
        }
         else if(age >= 31 && 40 >= age){
            printf("Pure Adult \n");
        }
        else if(age >= 41 && 60 >= age){
            printf("Semi Old \n");
        }
        else if(age >= 101){
            printf("he or she don\'t exist in this world! \n");
        }
        else{
            printf("Old \n");
        }
    }

return 0;
}
