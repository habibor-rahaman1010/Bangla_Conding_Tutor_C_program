//donation for our school
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    fp = fopen("donate.txt", "r");

/* //write to file here...

    char name[30];
    int donation = 0, i;

    for(i = 0; i < 5; i++){
        printf("Please enter your name: ");
        scanf("%s", name);

        printf("Please enter your amount of donation: ");
        scanf("%d", &donation);
        fprintf(fp, "%s: %d Tk.\n", name, donation);
    }
*/

    // read to file here...
    char buffer[30];
    int sum = 0;

    while(1){
        int code = fscanf(fp, "%s", buffer);
        if(code == EOF){
            break;
        }
        printf("%s ", buffer);


        code = fscanf(fp, "%s", buffer);
        if(code == EOF){
            break;
        }
        printf("%s ", buffer);
        sum += atoi(buffer);


        code = fscanf(fp, "%s", buffer);
        if(code == EOF){
            break;
        }
        printf("%s \n", buffer);

    }
    printf("\n");
    printf("Total donation is: %d Tk.\n", sum);

return 0;
}
