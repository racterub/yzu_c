#include <stdio.h>

int sum(int x) {
    int result = 0;
    while (x > 0) {
        result += x % 10;
        x /= 10;
    }
    return result;
}

int main(int argc, char *argv[])
{
    int data;
    printf("Input: ");
    scanf("%d", &data);
    printf("=> %d\n", sum(data));
    return 0;
}
