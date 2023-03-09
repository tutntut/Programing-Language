#include <stdio.h>

int main(void) {
    int nData = 10;

    printf("%d, %d, %d\n", sizeof(5), sizeof(nData), sizeof(int));
    //check type of 'A'
    printf("%d, %d\n", sizeof('A'), sizeof(char));
    printf("%d, %d\n", sizeof(123.456F), sizeof(123.456));

    printf("%d, %d\n", sizeof(nData+10), sizeof(++nData));
    printf("%d\n", nData);

    return 0;
}