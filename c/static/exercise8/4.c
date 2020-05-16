#include <stdio.h>
#include <string.h>
#include <ctype.h>

void stradd(char a[], char b[], char c[], int sz) {
    // I AM LAZY AS FUCK :D
    strcpy(c, a);
    strcat(c, b);
}

int main(int argc, char *argv[])
{
    char a[10], b[10], c[20];
    int aSize;
    int bSize;
    printf("Input a: ");
    fgets(a, 10, stdin);
    printf("Input b: ");
    fgets(b, 10, stdin);
    aSize = strlen(a) - 1;
    a[aSize] = '\0';

    bSize = strlen(b) - 1;
    b[bSize] = '\0';

    stradd(a, b, c, aSize);

    puts("");
    printf("=> %s\n", c);

    return 0;
}
