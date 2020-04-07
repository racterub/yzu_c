#include <stdio.h>

void fillCharacter(int w, int h, char ch) {
    for (int i=0;i<h;i++) {
        for (int j=0;j<w;j++) {
            putchar(ch);
        }
        puts("");
    }
}


int main(int argc, char *argv[])
{
    int w, h;
    char ch;
    printf("Input width, height and character of your rectangle: ");
    scanf("%d %d %c", &w, &h, &ch);
    puts("");
    fillCharacter(w, h, ch);
    return 0;
}
