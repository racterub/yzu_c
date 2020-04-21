#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void roll(int arr[]) {
    int face = rand() % 6;
    arr[face] += 1;
}



int main(int argc, char *argv[])
{
    int i;
    int dice[6] = {0}; // array initialization
    srand(time(NULL)); // set random seed

    for (i=0;i<100000;i++) {
        roll(dice);
    }
    
    for (i=0;i<6;i++) {
        printf("Face %d: having possibility: %.4f\n", i, dice[i] / 100000.0);
    }
    return 0;
}
