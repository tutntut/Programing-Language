#include <stdio.h>

int main(void) {
    int nMax = 0, nInput = 0;

    printf("Enter number: ");
    scanf("%d", &nInput);
    nMax = nInput;

    printf("Enter number: ");
    scanf("%d", &nInput);
    nMax = nInput > nMax ? nInput : nMax;

    printf("Enter number: ");
    scanf("%d", &nInput);
    nMax = nInput > nMax ? nInput : nMax;

    printf("MAX: %d\n", nMax);

    return 0;
}