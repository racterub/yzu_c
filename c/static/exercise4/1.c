#include <stdio.h>

int main(int argc, char *argv[])
{
    int data;
    while (1) {
        scanf("%d", &data);
        switch (data) {
            case 1: case 2: case 12:
                puts("Winter");
                break;
            case 3: case 4: case 5:
                puts("Spring");
                break;
            case 6: case 7: case 8:
                puts("Summer");
                break;
            case 9: case 10: case 11:
                puts("Autumn");
                break;
            default:
                return 1;
        }
    }
    return 0;
}
