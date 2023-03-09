#include <stdio.h>

int main(void) {
    int tsec = 0;

    printf("Enter the second: ");
    scanf("%d", &tsec);

    int hour = tsec/3600;
    int minute = (tsec - 3600*hour)/60;
    int sec = (tsec - 3600*hour - 60*minute);

    printf("%dsec is %02d hours %02d minutes %02d seconds\n", tsec, hour, minute, sec);

    return 0;
}