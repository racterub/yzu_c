#include <stdio.h>

int main(void) {
    int data;
    int tmp = 0;
    printf("Number: ");
    scanf("%d", &data);
    while (data > 0) {
        tmp = tmp * 10 + (data % 10);
        data /= 10;
    }
    while (tmp > 0) {
        printf("%d", tmp % 10);
        printf("     ");
        tmp /= 10;
    }
    return 0;
}
