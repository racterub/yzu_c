#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char input[100];
    char tmp[100];
    int inputLen;
    int point = 0;
    char ch;
    fgets(input, 100, stdin);
    //scanf("%99s", input);  // please don't do this
    inputLen = strlen(input);
    input[inputLen-1] = '\0';
    for (int i=0;i<inputLen;i++) {
        //Filter out non-alphabet character
        if (input[i] >= 'A' && input[i] <= 'Z') {
            //change uppercase to lowercase
            tmp[point] = input[i] + 0x20;
            point++;
        } else if (input[i] >= 'a' && input[i] <= 'z') {
            tmp[point] = input[i];
            point++;
        }
    }
    tmp[point] = '\0';

    strcpy(input, tmp);

    //reverse string
    for(int i=0;i<=point/2-1;i++) {
        ch=input[i];
        input[i]=input[point-i-1];
        input[point-i-1]=ch;
    }
    printf("%s %s\n", input, tmp);
    if (strcmp(input, tmp) == 0) {
        puts("This is a palindrome");
    } else {
        puts("This is NOT a palindrome");
    }
    return 0;
}
