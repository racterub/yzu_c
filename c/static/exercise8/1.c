#include <stdio.h>
#include <string.h>
/* Reference: [HERE](https://www.geeksforgeeks.org/remove-character-string-make-palindrome/) */


int removeCharacter(char str[], int start, int end) {
    while (start < end) {
        if (str[start] != str[end]) {
            return 0;
        }
        start = start + 1;
        end = end - 1;
    }
    return 1;
}

int checkPalindrone(char str[], int inputLen) {
    int start = 0, end = inputLen;
    while (start < end) {
        if (str[start] != str[end]) {
            if (removeCharacter(str, start+1, end)) {
                puts("start");
                return start;
            }
            if (removeCharacter(str, start, end+1)) {
                puts("end");
                return end;
            }
            return -1;
        }
        start = start + 1;
        end = end - 1;
    }
    return -2;
}


int main(int argc, char *argv[])
{
    char input[50];
    int inputLen, status;
    fgets(input, 50, stdin);
    inputLen = strlen(input) - 1;
    input[inputLen] = '\0';
    status = checkPalindrone(input, inputLen-1);
    if (status > 0){
        puts("True");
    } else if (status == -2) {
        puts("True");
    } else {
        puts("False");
    }
    return 0;
}
