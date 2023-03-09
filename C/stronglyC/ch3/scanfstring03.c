#include <stdio.h>

int main(void) {
    char mName[30] = {0};
    char wName[30] = {0};

    printf("Enter name: ");
    scanf("%[^\n]s", mName);
    printf("Enter name: ");
    scanf(" %[^\n]s", wName);

    printf("%s, %s\n", mName, wName);

    return 0;

}