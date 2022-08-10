//function in c program...
#include <stdio.h>
void say_hello(); // this is function prototype, when i write coustom function body after main function without prototype some waring show...

int main(){
    say_hello();
return 0;
}

void say_hello(){
    printf("Hello programmer how are you!");
}


