#include <stdio.h>
#include <math.h>



int main(int argc, char *argv[])
{
    float a, b;
    int counter = 0;
    for (int i=0;i<=100000;i++) {
        a = sqrt(i+100);
        b = sqrt(i+268);
        if ((a == (int)a) && (b == (int)b)) {
            counter++;
        }
    }
    printf("Found %d perfect numbers.\n", counter);
    return 0;
}
