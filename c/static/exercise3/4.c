#include <stdio.h>

int main(int argc, char *argv[])
{
    int data,tmp,answer = 0;
    while (1) {
        printf("Input: ");
        scanf("%d", &data);
        if (data < 0) {
            puts("Need a non-negative number");
            continue;
        }
        if (data == 0) return 1;
        answer = 0;
        for (int i=1;i<=data;i++) {
            tmp = 1;
            for (int j=1;j<=i;j++) {
                tmp *= j;
            }
            answer += tmp;
        }
        printf("==> %d\n", answer);
    }
    return 0;
}
