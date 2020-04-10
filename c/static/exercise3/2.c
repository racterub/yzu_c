#include <stdio.h>
#include <math.h>

// define out loop wil run 100 times
#define LOOP 30

int main(int argc, char *argv[])
{
    int data;
    //you can use int instead, using unsigned long long is just a prevention to int-overflow
    unsigned long long mod;
    float answer = 1.0;
    printf("Input: ");
    scanf("%d", &data);
    for (int i=1;i<=LOOP;i++) {
        mod = 1;
        for (int j=1;j<=i;j++) {
            mod *= j;
        }
        answer += pow(data, i) / (float)mod;
    }
    printf("==> %.10f\n", answer);
    return 0;
}
