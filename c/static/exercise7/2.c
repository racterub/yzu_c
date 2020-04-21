#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
    int arr[6];
    
    srand(time(NULL));
    
    for (int i=0;i<6;i++) {
        arr[i] = rand() % 49 + 1;
    }
    for (int i=0;i<6;i++) {
        printf("%d\n", arr[i]);
    }
    return 0;
}
