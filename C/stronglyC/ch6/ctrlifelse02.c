#include <stdio.h>

int main(void) {
    int nInput = 0, nSelect = 0;

    printf("Enter number: ");
    scanf("%d", &nInput);

    if (nInput <= 10) {
        if (nInput < 0)
            nSelect = 0;
        else
            nSelect = 10;
    }
    else
        nSelect = 20;
    
    printf("%d\n", nSelect);

    return 0;
}