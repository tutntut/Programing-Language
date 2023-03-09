#include <stdio.h>

int main(void) {
    int x=5, y=10;

    //True : 1, False : 0
    printf("%d\n", x == y);
    printf("%d\n", x != y);
    printf("%d\n", x > 5);
    printf("%d\n", 5 < y);

    printf("%d\n", y >= 10);
    printf("%d\n", y <= x+5);

    return 0;
}