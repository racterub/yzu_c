#include <stdio.h>

void printA(void) {
    for (int i=0;i<10;i++) {
        for (int j=0;j<=i;j++) {
            printf("*");
        }
        puts("");
    }
}

void printB(void) {
    for (int i=10;i>0;i--) {
        for (int j=1;j<=i;j++) {
            printf("*");
        }
        puts("");
    }
}

void printC(void) {
    for (int i=10;i>0;i--) {
        for (int j=10;j>i;j--) {
            printf(" ");
        }
        for (int k=1;k<=i;k++) {
            printf("*");
        }
        puts("");
    }
}

void printD(void) {
    for (int i=10;i>0;i--) {
        for (int j=1;j<i;j++) {
            printf(" ");
        }
        for (int k=10;k>=i;k--) {
            printf("*");
        }
        puts("");
    }
}

int main(int argc, char *argv[])
{
    
    printA();
    printB();
    printC();
    printD();
    return 0;
}
