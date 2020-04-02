#include <stdio.h>

int main(int argc, char *argv[])
{
    int data;
    float tmp;
    printf("Input: ");
    scanf("%d", &data);
    if (data <= 0) {
        return 1;
    }

    for (float i=0;i<=data;i++) {
        tmp = data / i;
        if (tmp == (int)tmp) {
            printf("%d ", (int)i);
        }
    }
    puts("");

    return 0;
}
