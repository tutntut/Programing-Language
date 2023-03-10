#include <stdio.h>

int main(void) {
    int j = 0;

    while(j<=5) {
        for(int i=0; i<j; i++) {
            printf("*\t");
        }
        ++j;
        printf("\n");
    }

    return 0;
}