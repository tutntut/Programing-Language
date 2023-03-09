#include <stdio.h>

int main(void) {
    int nMax = -9999, nInput = 0;

    printf("Enter number: ");
    scanf("%d", &nInput);
    nMax = nInput;

    printf("Enter number: ");
    scanf("%d", &nInput);
    if (nInput > nMax)
        nMax = nInput;

    printf("Enter number: ");
    scanf("%d", &nInput);
    if (nInput > nMax)
        nMax = nInput;

    printf("MAX: %d\n", nMax);

    return 0;
}