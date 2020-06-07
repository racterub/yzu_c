#include <stdio.h>
#include <string.h>
#include <ctype.h>

void swap(char ptr[100], int a, int b) {
    char ch;
    ch = ptr[a];
    ptr[a] = ptr[b];
    ptr[b] = ch;
}

int main(int argc, char *argv[])
{
    char input[100];
    int start = 0, end;
    int inputLen;
    printf("Input string S: ");
    fgets(input, 100, stdin);
    inputLen = strlen(input) - 1;
    input[inputLen] = '\0';
    end = inputLen;

    while (start < end) {
        if (isalpha(input[start]) && isalpha(input[end])) {
            swap(input, start, end);
            start++;
            end--;
        } else if (isalpha(input[start]) || isalpha(input[end])) {
            if (isalpha(input[start])) {
                end--;
            } else {
                start++;
            }
        } else {
            start++;
            end--;
        }
    }
    printf("%s\n", input);

    return 0;
}
