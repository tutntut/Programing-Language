#include <stdio.h>

int main(void) {
    int x=0;
    
    printf("Enter the number: ");
    scanf("%d", &x);

    printf("몫: %d\n", x/3);
    printf("나머지: %d\n", x%3);

    return 0;
}