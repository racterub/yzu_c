#include <stdio.h>

int main(int argc, char *argv[])
{
    int pal = 0;
    int data;
    int tmp;
    printf("Input: ");
    scanf("%d", &data);
    tmp = data;
    while (tmp > 0) {
        pal = pal * 10 + tmp % 10;
        tmp /= 10;
    }
    if (pal == data) {
        puts("True");
    } else {
        puts("False");
    }

    return 0;
}
