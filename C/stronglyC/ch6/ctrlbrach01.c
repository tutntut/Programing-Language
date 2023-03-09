#include <stdio.h>

int main(void) {
    int nAge = 0;

    printf("Enter age: ");
    scanf("%d", &nAge);

    if (nAge >= 20) {
        printf("Your age is %d\n", nAge);
    }

    puts("END");

    return 0;
}