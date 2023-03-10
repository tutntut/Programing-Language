#include <stdio.h>

int main(void) {
    int i = 5;
    int j = 0;
    while(i>0) {
        j = 5;
        while(j>0) {
            printf("\t*");
            --j;
        }
        printf("\n");
        --i;
    }

    return 0;
}