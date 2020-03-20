#include <stdio.h>

int main(int argc, char *argv[])
{
    int pal = 0;
    int data;
    int tmp;
    int counter;
    while (1) {
        counter = 0;
        pal = 0;
        printf("Input: ");
        scanf("%d", &data);
    
        //exception
        if (data < 0) break; 

        tmp = data;
        while (tmp > 0) {
            counter++;
            pal = pal * 10 + tmp % 10;
            tmp /= 10;
        }
        
        //exception
        if (counter != 5) {
            puts("Not a 5-digit number");
            break;
        }

        if (pal == data) {
            puts("True");
        } else {
            puts("False");
        }
    }
    return 0;
}
