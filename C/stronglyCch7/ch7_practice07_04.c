#include <stdio.h>

int main(void) {
    int num = 0;
    int check_state = 1;
    int i = 1;
    printf("Enter number: ");
    scanf("%d", &num);

    if (num > 9 || num < 1) {
        printf("ERROR");
        check_state = 0;
    }

    while(i<10 && check_state != 0) {
        printf("%d * %d = %d\n", num, i, num*i);
        ++i;
    }

    printf("\n");

    return 0;
}