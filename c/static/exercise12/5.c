#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(int argc, char *argv[])
{
    char a[200];
    char b[200];
    char *aToken[150];
    char *bToken[150];
    char *diffToken[150];
    char *token;
    char delim = ' ';
    int aLen, bLen, counterA = 0, counterB = 0;
    fgets(a, 200, stdin);
    fgets(b, 200, stdin);

    aLen = strlen(a) - 1;
    a[aLen] = '\0';
    bLen = strlen(b) - 1;
    b[bLen] = '\0';

    token = strtok(a, &delim);
    while (token != NULL) {
        aToken[counterA] = token;
        counterA++;
        token = strtok(NULL, &delim);
    }

    token = strtok(b, &delim);
    while (token != NULL) {
        bToken[counterB] = token;
        counterB++;
        token = strtok(NULL, &delim);
    }

    for (int i=0; i<counterA; i++) {
        for (int j=0; j<counterB; j++) {
        if (strcmp(aToken[i], bToken[j]) == 0) {
            printf("Found: a => %s, b => %s\n", aToken[i], bToken[j]);
        }
        }
    }


    return 0;
}
