#include <stdio.h>
#include <string.h>


int main(int argc, char *argv[])
{
    char input[10];
    int inputLen, counter = 0;
    printf("Input String: ");
    fgets(input, 10, stdin);
    inputLen = strlen(input)-1;
    input[inputLen] = '\0';
    for (int i=0; i<inputLen; i++) {
        for (int j=0; j<inputLen; j++) {
            for (int k=0; k<inputLen; k++) {
                if (i == j || i == k || j == k) continue;
                printf("%c%c%c\n", input[i], input[j], input[k]);
                counter++;
            }
        }
    }
    puts("");
    printf("The total number of permutation is %d\n", counter);
    return 0;
}
