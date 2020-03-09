#include <stdio.h>

int main(void) {
    int children, families;
    float avg;
    printf("Children: ");
    scanf("%d", &children);
    printf("Families: ");
    scanf("%d", &families);
    avg = (float)(children / families);
    printf("Avg: %f\n", avg);
    return 0;
}
