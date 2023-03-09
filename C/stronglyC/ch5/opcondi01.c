#include <stdio.h>

int main(void) {
    int nInput = 0, nSelect = 0;
    
    printf("Enter number: ");
    scanf("%d", &nInput);

    nSelect = nInput <= 10 ? 10 : 20;
    printf("%d\n", nSelect);

    nInput <= 10 ? (nSelect = 10) : (nSelect = 20);
    printf("%d\n", nSelect);

    return 0;
}