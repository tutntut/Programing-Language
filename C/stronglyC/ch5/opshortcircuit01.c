#include <stdio.h>

int main(void) {
    int nAge = 0, nHeight = 0;

    printf("Enter age: ");
    scanf("%d", &nAge);
    printf("Enter height: ");
    scanf("%d", &nHeight);

    printf("Result: %d(1:pass, 0:fail)\n", 20<nAge && nAge<30 && nHeight>150);

    return 0;

}