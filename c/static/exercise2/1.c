#include <stdio.h>

int main(int argc, char *argv[])
{
    int a,b,c,sum,product,min,max;
    float avg;

    printf("Input a b c: ");
    scanf("%d%d%d", &a, &b, &c);
    
    //avg
    avg = (a + b + c) / 3;

    //product
    product = a * b * c;

    //min
    min = a;
    if (b < min) {
        min = b;
    }
    if (c < min) {
        min = c;
    }

    //sum
    sum = a + b + c;

    //max
    max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }

    printf("a: %d, b: %d, c: %d\n", a, b, c);
    printf("Avg: %.2f\n", avg);
    printf("Product: %d\n", product);
    printf("Min: %d\n", min);
    printf("Max: %d\n", max);
    printf("SUM: %d\n", sum);
    return 0;
}
