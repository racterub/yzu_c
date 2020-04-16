#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
    int target;
    int answer;
    //set random seed
    srand(time(NULL));
    target = 1 + rand() % 1000;
    puts("I have a number between 1 and 1000.");
    puts("Can you guess my number?");
    puts("Please type your first guess.");
    // Infinite loop
    while (1) {
        scanf("%d", &answer);
        if (answer > target) {
            //if input > target
            puts("Too high. Try again.");
        } else if (answer < target) {
            //if input < target
            puts("Too low. Try again.");
        } else {
            puts("Excellent! You guessed the number");
            break;
        }
    }
    return 0;
}
