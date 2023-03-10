#include <stdio.h>

int main(void) {
    int num = 0;

    printf("Enter number: ");
    scanf("%d", &num);

    if (num < 1)
        num = 1;
    else if (num > 9)
        num = 9;
    else {
    }

    while (num > 0) {
        putchar('*');
        num -= 1;
    }

    printf("\n");
    return 0;
    
}