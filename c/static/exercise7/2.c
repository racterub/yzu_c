#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int checkDup(int arr[],int arrSize, int search) {
    for (int i=0;i<arrSize;i++) {
        if (search == arr[i]) {
            // return 1 if found same value in arr
            return 1;
        }
    }
    return 0;
}

int main(int argc, char *argv[])
{
    int arr[6] = {0};
    int tmp; 
    srand(time(NULL));
    int i = 0;
    while (i < 6) {
        tmp = 1 + rand() % 49;
        // check any duplication, if yes, regenerate again
        if (checkDup(arr, 6, tmp) == 1) {
           continue; 
        }
        arr[i] = tmp;
        i++;
    }
    for (int i=0;i<6;i++) {
        printf("%d\n", arr[i]);
    }
    return 0;
}
