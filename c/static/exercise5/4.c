#include <stdio.h>

void fillCharacter(int w, int h, char ch) {
    for (int i=0;i<h;i++) {
        for (int j=0;j<w;j++) {
            //you can use printf aswell
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
    /*
    You can use scanf separately, but there will be a bug.

    When you inputed second digit (h for example), your ch will be '\n', which is newline(換行)

    There is a fast way to fix it, try this:

    scanf("%d", &w);
    scanf("%d", &h);
    getchar();
    scanf("%d", &ch);

    getchar will get rid of newline for you
    */
    scanf("%d %d %c", &w, &h, &ch);
    puts("");
    fillCharacter(w, h, ch);
    return 0;
}
