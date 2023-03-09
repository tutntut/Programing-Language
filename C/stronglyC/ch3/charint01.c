#include <stdio.h>

int main(void) {
    
    //check ASCII by char
    printf("%c\n", 'A');
    printf("%c\n", 'A'+1);
    printf("%c\n", 'C');

    //check ASCII by int
    printf("%d\n", 'A');
    printf("%d\n", 'A'+1);
    printf("%d\n", 'C');

    //check int by char(ASCII)
    printf("%c\n", 65);
    printf("%c\n", 65+1);
    printf("%c\n", 67);

    return 0;
}