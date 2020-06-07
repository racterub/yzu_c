#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char *argv[])
{

    char input[50] = {0};
    int inputLen;
    printf("Input string: ");
    fgets(input, 50, stdin);
    inputLen = strlen(input) - 1;
    printf("==> ");
    for (int i=0; i<inputLen; i++) {
        printf("%c", toupper(input[i]));
    }
    puts("");
    return 0;
}
