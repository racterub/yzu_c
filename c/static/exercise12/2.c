#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *get_fname(char *p) {
    char *dir, *prev;
    char dirDelim = '\\';
    char fileDelim = '.';
    char *string = strdup(p);
    dir = strtok(string, &dirDelim);
    while (dir != NULL) {
        prev = dir;
        dir = strtok(NULL, &dirDelim);
    } 
    return strtok(prev, &fileDelim);
}

int main(int argc, char *argv[])
{
    char *p = get_fname("d:\\nc\\abc.cpp");
    printf("%s\n", p);
    return 0;
}
