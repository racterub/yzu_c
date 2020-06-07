#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char input[100];
    int inputLen;
    int i;
    int counter = 0;
    printf("Input string S: ");
    fgets(input, 100, stdin);
    inputLen = strlen(input) - 1;
    input[inputLen] = '\0';
    i = inputLen;
    while (i > 0) {
        if (input[i] == ' ') {
            printf("%d\n", counter);
            return 0;
        } else if ((input[i] >= 'a' && input[i] <= 'z') || (input[i] >= 'A' && input[i] <= 'Z')) {
            counter++;
        }
        i--;
    }
    puts("0");
    return 0;
}
