#include <stdio.h>

int isPerfect(int x) {
    int result = 0;
    int tmp;
    float fac;
    for (int i=1;i<x;i++) {
        if (x % i == 0) {
            result += i;
        }
    }
    if (result == x) {
        return 1;
    }
    return 0;
}


int main(int argc, char *argv[])
{


    for (int i=1;i<=1000;i++) {
        if (isPerfect(i)) {
            printf("%d is perfect number\n", i);
        }
    }
    return 0;
}
