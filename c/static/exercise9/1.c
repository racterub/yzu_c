#include <stdio.h>
#include <string.h>
#include <ctype.h> // to use isalpha function

void alternating_str(char a[], char b[], char c[]) {
    int aLen, bLen, cPoint, i;
    char ch;
    aLen = strlen(a)-1;
    bLen = strlen(b)-1;
    a[aLen] = '\0';
    b[bLen] = '\0';

    if (aLen > bLen) {
        for (i=0; i<bLen; i++) {
            ch = a[i];
            if (isalpha(ch)) {
                if (ch >= 'a' && ch <= 'z') {
                    c[cPoint] = ch - 0x20;
                } else {
                    c[cPoint] = ch;
                }
                cPoint++;
            } else {
                c[cPoint] = ch;
                cPoint++;
            }
            ch = b[i];
            if (isalpha(ch)) {
                if (ch >= 'a' && ch <= 'z') {
                    c[cPoint] = ch - 0x20;
                } else {
                    c[cPoint] = ch;
                }
                cPoint++;
            } else {
                c[cPoint] = ch;
                cPoint++;
            }
        }
        for (; i<aLen; i++) {
            ch = a[i];
            if (isalpha(ch)) {
                if (ch >= 'a' && ch <= 'z') {
                    c[cPoint] = ch - 0x20;
                } else {
                    c[cPoint] = ch;
                }
                cPoint++;
            } else {
                c[cPoint] = ch;
                cPoint++;
            }
        }
    } else {
        for (i=0; i<aLen; i++) {
            ch = a[i];
            if (isalpha(ch)) {
                if (ch >= 'a' && ch <= 'z') {
                    c[cPoint] = ch - 0x20;
                } else {
                    c[cPoint] = ch;
                }
                cPoint++;
            } else {
                c[cPoint] = ch;
                cPoint++;
            }
            ch = b[i];
            if (isalpha(ch)) {
                if (ch >= 'a' && ch <= 'z') {
                    c[cPoint] = ch - 0x20;
                } else {
                    c[cPoint] = ch;
                }
                cPoint++;
            } else {
                c[cPoint] = ch;
                cPoint++;
            }
        }
        for (; i<bLen; i++) {
            ch = b[i];
            if (isalpha(ch)) {
                if (ch >= 'a' && ch <= 'z') {
                    c[cPoint] = ch - 0x20;
                } else {
                    c[cPoint] = ch;
                }
                cPoint++;
            } else {
                c[cPoint] = ch;
                cPoint++;
            }
        }
    }
}

int main(int argc, char *argv[])
{
    char a[20], b[20], c[40];
    printf("Input a: ");
    fgets(a, 20, stdin);
    printf("Input b: ");
    fgets(b, 20, stdin);
    alternating_str(a, b, c);
    puts("");
    printf("=> %s\n", c);
    return 0;
}
