#include <stdio.h>

int main(void) {
    int basic_cost = 1000;
    int nInput = 0;

    printf("Enter your age: ");
    scanf("%d", &nInput);

    if(nInput >= 14) {
        basic_cost = (int)(basic_cost*0.75);
        if (nInput >= 20)
            basic_cost = 1000;
    }
    else {
        basic_cost = (int)(basic_cost*0.5);
        if(nInput <= 3)
            basic_cost = 0;
    }

    printf("Cost : %d\n", basic_cost);

    return 0;
}