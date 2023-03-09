#include <stdio.h>

int main(void) {
    int nInput=0, nTotal=0;

    for(int i=0; i<3; i++) {
        printf("Enter number: ");
        scanf("%d", &nInput);

        nTotal += nInput;
    }

    printf("Total : %d\n", nTotal);

    return 0;
}