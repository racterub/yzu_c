#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int dice_roll(int win_num) {
    int dice;
    //roll have 8 possibilities
    /*
    e.g.

    weighted_face = 3

    roll: 1, 2, 3, 4, 5, 6, 7, 8
    face: 1, 2, 3, 3, 3, 4, 5, 6

    so face 3 will have 3/8 oopportunities (we only run this 10000 times, so this won't be accurate)
    */

    dice = 1 + rand() % 8;
    if (dice < win_num) {

        return dice;
    } else if ((dice >= win_num) && (dice < win_num+3)) {
        return win_num;
    } else {
        return dice - 2;
    }
    return 0;
}

int main(int argc, char *argv[])
{
    //maybe you can use int array
    int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;
    int result;
    int weight;
    //set random seed
    srand(time(NULL));
    printf("Weighted dice face: ");
    scanf("%d", &weight);
    for (int i=0;i<10000;i++) {
        //run 10000 times
        result = dice_roll(weight);
        switch (result) {
            case 1:
                a += 1;
                break;
            case 2:
                b += 1;
                break;
            case 3:
                c += 1;
                break;
            case 4:
                d += 1;
                break;
            case 5:
                e += 1;
                break;
            case 6:
                f += 1;
                break;
        }
    }
    printf("face 1, probability: %.4f\n", a / 10000.0);
    printf("face 2, probability: %.4f\n", b / 10000.0);
    printf("face 3, probability: %.4f\n", c / 10000.0);
    printf("face 4, probability: %.4f\n", d / 10000.0);
    printf("face 5, probability: %.4f\n", e / 10000.0);
    printf("face 6, probability: %.4f\n", f / 10000.0);
    return 0;
}
        
