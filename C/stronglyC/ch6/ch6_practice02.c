#include <stdio.h>

int main(void) {
    int nAge = 0, cost = 1000;

    printf("Enter your age: ");
    scanf("%d", &nAge);

    if (nAge >= 65)
        cost = 0;
    else if (nAge >= 20)
        cost = 1000;
    else if (nAge >= 14)
        cost = (int)(cost*0.75);
    else if(nAge >= 4)
        cost = (int)(cost*0.5);
    else
        cost = 0;
    
    printf("Cost: %d\n", cost);

    return 0;
}