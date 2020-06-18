#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * Compiled with GCC on MacOS
 */


int main(int argc, char *argv[])
{
    FILE *fp, *output;
    int year, month, day;
    char time[6], ch;
    float close;
    float chart[12][31] = { 0 };
    int counter[12][31] = { 0 };
    
    // open file pointer
    fp = fopen("10co2008CO.txt", "r");
    output = fopen("output.txt", "w");

    //check file pointer status
    if (fp == NULL || output == NULL) {
        puts("fp or output got error!");
        return 1;
    }

    // discard first line (trash)
    ch = fgetc(fp);
    while (ch != '\n') {
        ch = fgetc(fp);
    }

    // receive data
    while (1) {
        fscanf(fp, "%d/%d/%d %s%f", &year, &month, &day, time, &close);
        if (feof(fp)) {
            break;
        }
        chart[month-1][day-1] += close;
        counter[month-1][day-1]++;
    }


    // write first row
    fprintf(output, "Data    avg_close\n");


    for (int i=0; i<12; ++i) {
        for (int j=0; j<31; ++j) {
            // pass if that day didn't have any record
            if (counter[i][j] == 0) {
                continue;
            } else {
                fprintf(output, "2008/%d/%d   %4.4f\n", i+1, j+1, chart[i][j] / counter[i][j]);
            }
        }
    }
    

    // close file pointer
    fclose(fp);
    fclose(output);

    return 0;
}
