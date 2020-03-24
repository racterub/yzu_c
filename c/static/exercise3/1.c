#include <stdio.h>

int main(int argc, char *argv[])
{
    int data;
    int answer;
    while (1) {
        printf("Input: ");
        scanf("%d", &data);
        printf("=> %d\n", data);
        // Not processing numbers that are negative
        if (data < 0) {
            puts("Need a non-negative number");
            continue;
        }
        if (data == 0) return 0; // Input 0 to exit
        answer = 1;
        while (data > 0) {
            answer *= data;
            data--;
        }
        printf("==> %d\n", answer);
    }
    return 0;
}
