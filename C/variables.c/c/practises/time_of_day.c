// GLG 7th period time of day 
#include <stdio.h>

int main() {
    int hour;

    printf("What time is it, in military time? ");
    scanf("%d", &hour);

    if (hour >= 18 && hour <= 23) {
        printf("Good Evening!\n");
    }
    else if (hour >= 12 && hour <= 17) {
        printf("Good Afternoon!\n");
    }
    else {
        printf("Good Night!\n");
    }

    return 0;
}
