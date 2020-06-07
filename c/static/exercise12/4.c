#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(char *a, char *b) {
    char ch;
    ch = *a;
    *a = *b;
    *b = ch;
}

int main(int argc, char *argv[])
{
    char input[50];
    char output[50] = {0};
    char *word;
    char delim = ' ';
    int start = 0, end;
    int inputLen;
    printf("Input string S: ");
    fgets(input, 50, stdin);

    inputLen = strlen(input) - 1;
    input[inputLen] = '\0';
    end = inputLen - 1;

    word = strtok(input, &delim);
    while (word != NULL) {
        start = 0;
        end = strlen(word) - 1;
        while (start < end) {
            swap(word+start, word+end);
            start++;
            end--;
        }
        strcat(output, word);
        strcat(output, " ");
        word = strtok(NULL, &delim);
    }
    printf("%s\n", output);


    return 0;
}
