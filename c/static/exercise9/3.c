#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char arr[20];
    char target[20];
    char tmp[20] = {0};
    int pointer = 0;
    int arrLen, targetLen;

    printf("Input s1: ");
    fgets(arr, 20, stdin);
    printf("Input s2: ");
    fgets(target, 20, stdin);

    arrLen = strlen(arr) - 1;
    targetLen = strlen(target) - 1;

    arr[arrLen] = '\0';
    target[targetLen] = '\0';


    for (int i=0; i<arrLen; i++) {
        memset(tmp, 0, sizeof(tmp));
        pointer = 0;
        for (int k=i; k<arrLen; k++) {
            tmp[pointer] = arr[k];
            pointer++;
        }
        for (int j=0; j<i; j++) {
            tmp[pointer] = arr[j];
            pointer++;
        }
        if (strcmp(tmp, target)) {
            puts("true");
            return 0;
        }
    }
    puts("false");
    return 0;
}
