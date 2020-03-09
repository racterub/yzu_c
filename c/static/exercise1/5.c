#include <stdio.h>

int main(void) {
    int time, h = 0, m = 0, s = 0;
    printf("Time: ");
    scanf("%d", &time);
    s = time % 60;
    time /= 60;
    m = time % 60;
    time /= 60;
    h = time % 60;
    printf("hours: %d, minuates: %d, seconds: %d\n", h, m, s);
    return 0;
}

