//string in c program...
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
        char ch;
        char s[100], sen[100];
        scanf("%c", &ch);
        scanf("%s", s);
        scanf("\n%[^\n]s", sen);

        printf("%c \n", ch);
        printf("%s \n", s);
        printf("%s \n", sen);


return 0;
}
