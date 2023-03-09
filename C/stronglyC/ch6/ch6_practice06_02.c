#include <stdio.h>

int main(void) {
    int basic_cost = 1000, cost = 1000;
    int nAge = 0;

    printf("Enter age: ");
    scanf("%d", &nAge);

    if (nAge < 20)
        cost = (int)(basic_cost * 0.75);
    
    printf("Cost: %d\n", cost);

    return 0;
}