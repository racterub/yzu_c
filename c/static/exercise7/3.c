#include <stdio.h>
#include <stdlib.h>

void printPascal(int n) {
    int arr[n];
    int result = 1;
    for (int i=1;i<=n;i++) {
        arr[i-1] = result;
        result = result * (n - i) / i;
    }
    for (int i=0;i<n;i++) {
        printf("%d ", arr[i]);
    }
}


int main(int argc, char *argv[])
{

    printPascal(5);
    return 0;
}
