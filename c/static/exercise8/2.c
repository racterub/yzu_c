#include <stdio.h>

// FOR DEBUG
// void showMatrix(int arr[3][3]) {
//     for (int i=0; i<3;i++) {
//         for (int j=0; j<3; j++) {
//             printf("%d", arr[i][j]);
//         }
//         puts("");
//     }
// }


void matrix_add(int a[3][3], int b[3][3]) {
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            a[i][j] += b[i][j];
        }
    }
}

int main(int argc, char *argv[])
{
    int a[3][3] = {0};
    int b[3][3] = {0};
    

    // a matrix
    puts("Input Matrix A");
    for (int i=1; i<=3; i++) {
        printf("Input a%d1 a%d2 a%d3: ", i, i, i);
        scanf("%d%d%d", &a[i-1][0], &a[i-1][1], &a[i-1][2]);

    }
    // b matrix
    puts("");
    puts("Input Matrix B");
    for (int i=1; i<=3; i++) {
        printf("Input b%d1 b%d2 b%d3: ", i, i, i);
        scanf("%d%d%d", &b[i-1][0], &b[i-1][1], &b[i-1][2]);
    }

    matrix_add(a, b);

    puts("");
    puts("A Matrix + b + Matrix");
    for (int i=0; i<3; i++) {
        printf("%d %d %d\n", a[i][0], a[i][1], a[i][2]);
    }



    return 0;
}
