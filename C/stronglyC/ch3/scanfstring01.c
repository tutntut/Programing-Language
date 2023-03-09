#include <stdio.h>

int main(void) {
    char szBuffer[32] = {0};

    printf("Enter word: ");
    scanf("%s", szBuffer);

    printf("Result : %s\n", szBuffer);

    return 0;
}