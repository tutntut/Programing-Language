#include <stdio.h>

int main(void) {
    char szName[32] = {0};
    int nAge = 0;

    printf("Enter your age: ");
    scanf("%d", &nAge);

    printf("Enter your name: ");
    gets(szName);

    printf("%d, %s", nAge, szName);

    return 0;
}