#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse_word(char *s1, char *s2) {
    int *result[50];
    char *s1Dup = strdup(s1);
    char s1Delim = ' ';
    char *token;
    int counter = 0;
    token = strtok(s1Dup, &s1Delim);
    while (token != NULL) {
        result[counter] = (int*)token;
        counter++;
        token = strtok(NULL, &s1Delim);
    }
    for (int i=counter-1; i>=0; i--) {
        strcat(s2, (char*)result[i]);
        if (i != 0) {
            strcat(s2, " ");
        }
    }
}

int main(int argc, char *argv[])
{
    char s1[50];
    char s2[50] = {0};
    int s1Len;
    printf("Input string S: ");
    fgets(s1, 50, stdin);
    
    s1Len = strlen(s1) - 1;
    s1[s1Len] = '\0';

    reverse_word(s1, s2);
    printf("%s\n", s2);
    return 0;
}
