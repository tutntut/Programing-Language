#include <stdio.h>

int main(void) {
    int x=0, y=0;

    printf("Enter two number: ");
    scanf("%d%d", &x, &y);

    printf("Sum of two numbers is %d", x+y);

    return 0;
}