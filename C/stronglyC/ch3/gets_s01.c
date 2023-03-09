#include <stdio.h>

int main(void) {
    char szName[32] = {0};

    printf("Enter your name: ");
    //Linux, UNIX: fgets(szName, sizeof(szName), stdin);
    // window : gets_s(szName, sizeof(szName));
    fgets(szName, sizeof(szName), stdin);

    printf("Your name is ");
    puts(szName);

    return 0;
}