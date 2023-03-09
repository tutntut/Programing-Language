#include <stdio.h>
//to use _getch import conio.h
#include <conio.h>

int main(void) {
    char ch = 0;

    printf("Enter anykey. \n");

    //_getch() returns input key and store it in ch
    //make sure the difference between getchar()
    ch = _getch();

    //print result
    printf("Input key is ");
    putchar(ch);
    printf("\n");

    return 0;
}