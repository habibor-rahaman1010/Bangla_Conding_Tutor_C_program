//A palindrome is a word which reads the same backward as forward, e.g. racecar.
#include <stdio.h>
#include <string.h>

int main(){
    char s[100];
    int i, length;
    int flag = 0;

    printf("Enter a string: ");
    scanf("%s", s);

    length = strlen(s);

    for(i=0;i < length ;i++){
        if(s[i] != s[length-i-1]){
            flag = 1;
            break;
           }
        }

    if (flag) {
        printf("No");
    }
    else {
        printf("YES");
    }
    return 0;
}
