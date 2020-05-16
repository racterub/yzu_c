#include <stdio.h>

void transpose(int a[3][3], int b[3][3]) {
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            b[j][i] = a[i][j];
        }
    }
}


int main(int argc, char *argv[])
{
    int a[3][3] = {0};
    int b[3][3] = {0};

    puts("Input Matrix:");
    for (int i=1; i<=3; i++) {
        printf("a%d1 a%d2 a%d3: ", i, i, i);
        scanf("%d%d%d", &a[i-1][0], &a[i-1][1], &a[i-1][2]);
    }
    transpose(a, b);
    puts("");
    puts("Transposed Matrix: ");
    for (int i=0; i<3; i++) {
        printf("%d %d %d\n", b[i][0], b[i][1], b[i][2]);
    }

    return 0;
}
