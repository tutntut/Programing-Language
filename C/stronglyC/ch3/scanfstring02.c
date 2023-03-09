#include <stdio.h>

int main(void) {
    char szBufferLeft[32] = {0};
    char szBufferRight[32] = {0};

    printf("Enter word: ");
    scanf("%s%s", szBufferLeft, szBufferRight);

    printf("Result : %s %s\n", szBufferLeft, szBufferRight);

    return 0;
}