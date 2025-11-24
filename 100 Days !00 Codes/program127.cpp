#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *inputFile, *outputFile;
    int ch;

    // Open input file in read mode
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        printf("Error opening input.txt\n");
        return 1;
    }

    // Open output file in write mode
    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        printf("Error opening output.txt\n");
        fclose(inputFile);
        return 1;
    }

    // Read character by character, convert lowercase to uppercase
    while ((ch = fgetc(inputFile)) != EOF) {
        fputc(toupper(ch), outputFile);
    }

    fclose(inputFile);
    fclose(outputFile);

    printf("Content converted to uppercase and written to output.txt\n");
    return 0;
}