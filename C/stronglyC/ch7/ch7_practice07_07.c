#include <stdio.h>

int main(void) {
    int num, line = 1;

    printf("Enter number: ");
    scanf("%d", &num);

    while (line <= num) {
        for (int i=0; i < num-line; i++) {
            printf("\t");
        }
        for (int j=0; j<(line-1)*2-1; j++) {
            printf("*\t");
        }
        ++line;
        printf("\n");
    }

    return 0;
}