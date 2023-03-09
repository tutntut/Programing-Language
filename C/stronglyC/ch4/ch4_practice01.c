#include <stdio.h>

int main(void) {
    int x1=0, x2=0;

    printf("Enter two numbers: ");
    scanf("%d%d", &x1, &x2);

    printf("AVG : %.2f\n", (x1+x2)/2.0);

    return 0;
}