#include <stdio.h>

int main(void) {
    //print memory byte
    printf("%d\n", sizeof(123.456F));
    printf("%d\n", sizeof(123.456));

    printf("%f\n", 123.456F); //float

    printf("%f\n", 123.456); //double
    printf("%lf\n", 123.456); //long double

    return 0;
}