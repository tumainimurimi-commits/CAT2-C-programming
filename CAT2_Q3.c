/*
Name: Tumaini Murimi 
Reg no: CT100/G/26252/25
Description:write_to_file
*/
#include <stdio.h>
#include <stdlib.h>

void writeIntegersToFile() {
    FILE *fp;
    int numbers[10];
    fp = fopen("input.txt", "w");
    if (fp == NULL) {
        printf("Error opening input.txt for writing.\n");
        exit(1);
    }

    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
        fprintf(fp, "%d\n", numbers[i]);
    }
    fclose(fp);
}

void processIntegers() {
    FILE *infile, *outfile;
    int num, sum = 0, count = 0;
    float average;

    infile = fopen("input.txt", "r");
    if (infile == NULL) {
        printf("Error opening input.txt for reading.\n");
        exit(1);
    }

    outfile = fopen("output.txt", "w");
    if (outfile == NULL) {
        printf("Error opening output.txt for writing.\n");
        fclose(infile);
        exit(1);
    }

    while (fscanf(infile, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    average = (float)sum / count;
    fprintf(outfile, "Sum = %d\nAverage = %.2f\n", sum, average);

    fclose(infile);
    fclose(outfile);
}

void displayFiles() {
    FILE *fp;
    char ch;

    printf("\n--- Contents of input.txt ---\n");
    fp = fopen("input.txt", "r");
    if (fp == NULL) {
        printf("Error opening input.txt.\n");
        return;
    }
    while ((ch = fgetc(fp)) != EOF)
        putchar(ch);
    fclose(fp);

    printf("\n--- Contents of output.txt ---\n");
    fp = fopen("output.txt", "r");
    if (fp == NULL) {
        printf("Error opening output.txt.\n");
        return;
    }
    while ((ch = fgetc(fp)) != EOF)
        putchar(ch);
    fclose(fp);
}

int main() {
    writeIntegersToFile();
    processIntegers();
    displayFiles();

    return 0;
}
