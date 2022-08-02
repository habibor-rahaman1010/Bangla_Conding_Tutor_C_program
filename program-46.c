//vowel or consonant find out in c program...
#include <stdio.h>

int main(){
    char ch;
    printf("Enter your character: ");
    scanf("%c", &ch);

    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
        printf("%c is vowel character! \n", ch);
    }
    else{
        printf("%c is consonant character! \n", ch);
    }


return 0;
}
