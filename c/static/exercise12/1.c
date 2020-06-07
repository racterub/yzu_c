#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void error(void) {
    puts("Invalid email address");
}

int main(int argc, char *argv[])
{
    char input[50];
    char *username, *domain, *level, *save;
    char domainDelim = '@';
    char levelDelim = '.';
    int inputLen;
    printf("Input email address: ");
    fgets(input, 50, stdin);
    inputLen = strlen(input) - 1;
    input[inputLen] = '\0';
    
    username = strtok(input, &domainDelim);
    domain = strtok(NULL, &domainDelim);


    if ((username == NULL) || (domain == NULL)) {
        error();
        return 1;
    }

    level = strtok_r(domain, &levelDelim, &save);
    if ((strcmp("yzu", level) == 0) || (strcmp("yzu.edu.tw", save) != 0)) {
        error();
        return 1;
    }

    puts("Valid email address");

    return 0;
}
