#include <stdio.h>

int main(void) {
    //check difference between %d & %u
    printf("%d\n", 10);
    printf("%u\n", 10);
    printf("%d\n", 10U);
    printf("%u\n", 10U);

    printf("%d\n", 2147483647);
    printf("%d\n", 2147483648);
    printf("%u\n", 2147483649);

    printf("%d\n", -1);
    printf("%u\n", -1);

    return 0;
}