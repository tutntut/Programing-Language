#include <stdio.h>

int main(void) {
    int j = 1;

    while (j <= 5) {
        for(int i=0; i <= 4-j; i++) {
            printf("\t");
        }
        for(int k=1; k <= j; k++) {
            printf("\t*");
        }
        ++j;
        printf("\n");
    }

    return 0;
}