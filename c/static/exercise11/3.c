#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char input[20];
    char delim = '.';
    char *ch;
    int inputLen;
    int pointer = 0;
    int ipSeg[4];
    
    printf("Input IP: ");
    fgets(input, 20, stdin);
    
    inputLen = strlen(input) - 1;
    input[inputLen] = '\0';

    ch = strtok(input, &delim);
    while (ch != NULL) {
        if (pointer > 3) {
            puts("Invalid IP");
            return 1;
        }
        ipSeg[pointer] = strtol(ch, NULL, 10);
        ch = strtok(NULL, &delim);
        pointer++;
    }

    if (ipSeg[0] != 140 || ipSeg[1] != 138) {
        puts("Invalid IP");
        return 1;
    }
    
    if (ipSeg[2] < 0 || ipSeg[2] > 255) {
        puts("Invalid IP");
        return 1;
    }


    if (ipSeg[3] < 0 || ipSeg[3] > 255) {
        puts("Invalid IP");
        return 1;
    }

    puts("Valid IP");
    return 0;
}
