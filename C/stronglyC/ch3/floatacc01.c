#include <stdio.h>

int main(void) {
    float check = 0;

    for(int i=0; i<50; i++) {
        check += 0.1F;
    }

    printf("%f\n", check);

    return 0;
}