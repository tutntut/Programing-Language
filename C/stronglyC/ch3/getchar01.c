#include <stdio.h>

int main(void) {
    char ch = 0;

    //getchar() return input and svae in ch
    ch = getchar();

    putchar(ch);
    putchar('Z');
    printf("\n");

    return 0;
}