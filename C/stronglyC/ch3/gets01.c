#include <stdio.h>

int main(void) {
    char szName[32] = {0};

    printf("Enter your name: ");

    //save all the inputs
    gets(szName);

    printf("Your name is ");
    puts(szName);

    return 0;
}