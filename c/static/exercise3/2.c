#include <stdio.h>
#include <math.h>

// define out loop wil run 100 times
#define LOOP 10

int main(int argc, char *argv[])
{
    int data;
    int mod;
    float answer = 1.0;
    printf("Input: ");
    scanf("%d", &data);
    for (int i=0;i<LOOP;i++) {
        mod = 1; 
        for (int j=1;j<=i;j++) {
            mod *= j;
        }
        printf("%.3f\n", answer);
        answer += pow(data, i) / mod;
    }
    printf("==> %.3f\n", answer);
    return 0;   
}
