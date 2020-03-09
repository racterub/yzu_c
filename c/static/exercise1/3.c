#include <stdio.h>
#include <math.h> // Include math header for sqrt()

int main(void) {
    int a, b, c;
    float area, s;
    printf("Input side a: ");
    scanf("%d", &a);
    printf("Input side b: ");
    scanf("%d", &b);
    printf("Input side c: ");
    scanf("%d", &c);
    s = (a + b + c) / 2;
    area = sqrt((s-a) * (s-b) * (s-c) * s);
    printf("%.3f", area);
    return 0;
}
