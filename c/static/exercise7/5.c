#include <stdio.h>
#include <stdbool.h> // we need this so that we can use boolean (true/false)

int partition(int arr[],int arrSize) {
    int sum = 0;
    int tmp = 0;
    int target;
    int part = 0;
    for (int i=0;i<arrSize;i++) {
        sum += arr[i];
    }
    /*
        we need to divide arr into three part with the same sum.
        In mathematic, equation should be n*3 == arrSum (n is the sum of part arr)
        so if sum % 3 == 0, this should be a valid case.
    */
    if (sum % 3 == 0) {
        /*
            iterate through arr, if sum equals to n, we have one part of the arr, so part++
        */
        target = sum / 3;
        for (int i=0;i<arrSize;i++) {
            tmp += arr[i];
            if (tmp == target) {
                part++;
                tmp = 0;
            }
        }
    }
    if (part == 3) {
        return true;
    } else {
        return false;
    }
}

int main(int argc, char *argv[])
{
    int arr[] = {0,2,1,-6,6,-7,9,1,2,0,1};
    bool ret;
    ret = partition(arr, 11);
    printf("%s", ret ? "true" : "false");
    return 0;
}
