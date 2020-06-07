#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char input[100];
    char delim = ' ';
    char *ch;
    int integer[100];
    int pointer = 0;

    printf("Input: ");
    fgets(input, 100, stdin);

    ch = strtok(input, &delim);
    while (ch != NULL) {
        integer[pointer] = (int)strtol(ch, NULL, 10);
        ch = strtok(NULL, &delim);
        pointer++;
    }

    // integer is the array we want
    for (int i=0; i<3; i++) {
        printf("%d\n", integer[i]);
    }


    return 0;
}
