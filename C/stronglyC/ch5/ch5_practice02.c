#include <stdio.h>

int main(void) {
    int nMax = 0;
    int a,b,c;

    printf("Enter numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    a < b ? (nMax = b) : (nMax = a);
    nMax < c ? (nMax = c) : (nMax = b);

    printf("MAX: %d\n", nMax);
    return 0;
}