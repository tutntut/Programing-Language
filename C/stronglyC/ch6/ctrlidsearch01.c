#include <stdio.h>

int main(void) {
    int nInput = 0;

    //number1 nInput
    printf("Enter number: ");
    scanf("%d", &nInput);

    if (nInput > 10) {
        //number2 nInput
        int nInput = 20;
        printf("%d\n", nInput);

        if (nInput < 20) {
            //number3 nInput
            int nInput = 30;
            printf("%d\n", nInput);

            //number3 nInput delete in here
        }

    //number2 nInput delete in here
    }

    printf("%d\n", nInput);
    //number 1 nInput delete in here

    //these 3 nInputs are different
    return 0;
}