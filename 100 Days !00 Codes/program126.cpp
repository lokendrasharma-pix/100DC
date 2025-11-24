#include <stdio.h>

int main() {
    char filename[100];
    FILE *file;
    char ch;

    // Ask for filename
    printf("Enter filename: ");
    scanf("%s", filename);

    // Try opening the file in read mode
    file = fopen(filename, "r");

    if (file == NULL) {
        printf("Error: File does not exist!\n");
    } else {
        printf("File opened successfully.\n");

        // Read and display file content
        while ((ch = fgetc(file)) != EOF) {
            putchar(ch);
        }

        fclose(file);
    }

    return 0;
}
