#include <stdio.h>

int main(void) {
    char ch = 'A';

    printf("%c\n", ch);

    //Type of the result is int not char
    printf("%c\n", ch+1);
    printf("%c\n", 'A'+2);

    printf("%d\n", 5.0+2);
    printf("%f\n", 5.0+2);

    return 0;
}