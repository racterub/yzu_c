#include <stdio.h>

int main(void) {
    int change, price, count = 0;
    int fifty = 0, ten = 0, five = 0, one = 0;
    printf("Price: ");
    scanf("%d", &price);
    change = 100 - price;
    fifty = change / 50;
    change %= 50;
    ten = change / 10;
    change %= 10;
    five = change / 5;
    change %= 5 ;
    one = change;
    printf("50: %d, 10: %d, 5: %d, 1: %d", fifty, ten, five, one);
    return 0;
}
