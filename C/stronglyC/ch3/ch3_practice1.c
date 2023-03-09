#include <stdio.h>

int main(void) {
    int nAge;
    char name[30] = {0};

    printf("Enter your age: ");
    scanf("%d", &nAge);

    printf("Enter your name: ");
    scanf("%s", &name);

    printf("Your age is %d, your name is '%s'. ", nAge, name);

    return 0;
}