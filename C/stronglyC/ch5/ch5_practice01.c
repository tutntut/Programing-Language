#include <stdio.h>

int main(void) {
    int nHeight = 0;
    int check_bool = 0;

    printf("Enter height: ");
    scanf("%d", &nHeight);

    nHeight >= 150 ? (check_bool = 1) : (check_bool = 0);

    printf("Result : %d (1:pass, 0:fail)\n",check_bool);
    
    return 0;
}