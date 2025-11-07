/*
NAME:shedrack kiilu
REG NO:ct100/g/23588/24
DATE:6TH/NOV/2025
*/

#include <stdio.h>

#define SIZE 10

void writeInputFile() {
    FILE *fp;
    int numbers[SIZE];

    fp = fopen("input.txt", "w");
    if (fp == NULL) {
        printf("Error opening input.txt for writing!\n");
        return;#include <stdio.h>

#define SIZE 10

void writeInputFile() {
    FILE *fp;
    int numbers[SIZE];

    fp = fopen("input.txt", "w");
    if (fp == NULL) {
        printf("Error opening input.txt for writing!\n");
        return;
    }

    printf("Enter %d integers:\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &numbers[i]);
        fprintf(fp, "%d\n", numbers[i]);
    }

    fclose(fp);
}

void processNumbers() {
    FILE *fpIn, *fpOut;
    int num, sum = 0;
    float avg;

    fpIn = fopen("input.txt", "r");
    if (fpIn == NULL) {
        printf("Error opening input.txt for reading!\n");
        return;
    }

    fpOut = fopen("output.txt", "w");
    if (fpOut == NULL) {
        printf("Error opening output.txt for writing!\n");
        fclose(fpIn);
        return;
    }

    for (int i = 0; i < SIZE; i++) {
        fscanf(fpIn, "%d", &num);
        sum += num;
    }

    avg = (float)sum / SIZE;

    fprintf(fpOut, "Sum = %d\n", sum);
    fprintf(fpOut, "Average = %.2f\n", avg);

    fclose(fpIn);
    fclose(fpOut);
}

void displayFiles() {
    FILE *fp;
    char ch;

    fp = fopen("input.txt", "r");
    if (fp == NULL) {
        printf("Error reading input.txt\n");
        return;
    }

    printf("\nContents of input.txt:\n");
    while ((ch = fgetc(fp)) != EOF)
        putchar(ch);
    fclose(fp);

    fp = fopen("output.txt", "r");
    if (fp == NULL) {
        printf("Error reading output.txt\n");
        return;
    }

    printf("\nContents of output.txt:\n");
    while ((ch = fgetc(fp)) != EOF)
        putchar(ch);
    fclose(fp);
}

int main() {
    writeInputFile();
    processNumbers();
    displayFiles();
    return 0;
}
    }

    printf("Enter %d integers:\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &numbers[i]);
        fprintf(fp, "%d\n", numbers[i]);
    }

    fclose(fp);
}

void processNumbers() {
    FILE *fpIn, *fpOut;
    int num, sum = 0;
    float avg;

    fpIn = fopen("input.txt", "r");
    if (fpIn == NULL) {
        printf("Error opening input.txt for reading!\n");
        return;
    }

    fpOut = fopen("output.txt", "w");
    if (fpOut == NULL) {
        printf("Error opening output.txt for writing!\n");
        fclose(fpIn);
        return;
    }

    for (int i = 0; i < SIZE; i++) {
        fscanf(fpIn, "%d", &num);
        sum += num;
    }

    avg = (float)sum / SIZE;

    fprintf(fpOut, "Sum = %d\n", sum);
    fprintf(fpOut, "Average = %.2f\n", avg);

    fclose(fpIn);
    fclose(fpOut);
}

void displayFiles() {
    FILE *fp;
    char ch;

    fp = fopen("input.txt", "r");
    if (fp == NULL) {
        printf("Error reading input.txt\n");
        return;
    }

    printf("\nContents of input.txt:\n");
    while ((ch = fgetc(fp)) != EOF)
        putchar(ch);
    fclose(fp);

    fp = fopen("output.txt", "r");
    if (fp == NULL) {
        printf("Error reading output.txt\n");
        return;
    }

    printf("\nContents of output.txt:\n");
    while ((ch = fgetc(fp)) != EOF)
        putchar(ch);
    fclose(fp);
}

int main() {
    writeInputFile();
    processNumbers();
    displayFiles();
    return 0;
}