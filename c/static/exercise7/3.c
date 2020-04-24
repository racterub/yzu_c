#include <stdio.h>
#include <stdlib.h>

void printPascal(int n) {
    // see method 3 at [HERE](https://www.geeksforgeeks.org/pascal-triangle/)
    int result;
    for (int i=1;i<=n;i++) {
        result = 1;
        for (int j=1;j<=i;j++) {
            printf("%d ", result);
            result = result * (i - j) / j;
        }
        puts("");
    }
}


int main(int argc, char *argv[])
{
    int input;
    printf("Height of Pascal triangle: ");
    scanf("%d", &input);
    printPascal(input);
    return 0;
}
