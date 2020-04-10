#include <stdio.h>

int fib(int n) {
    if (n == 1 || n == 0) return n;
    return fib(n-1) + fib(n-2);
}

//maybe you can try linked-list version of fib, which is faster :)

int main(int argc, char *argv[])
{

    int data;
    while (1) {
        printf("Input: ");
        scanf("%d", &data);
        if (data < 0) {
            puts("Need a non-negative number");
            continue;
        }
        if (data == 0) return 1;
        printf("==> %d\n", fib(data));
    }

    return 0;
}
