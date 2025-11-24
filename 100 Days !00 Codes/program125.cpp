#include <stdio.h>
#include <string.h>

int main() {
    FILE *file;
    char filename[100];
    char newLine[256];

    // Take filename input
    printf("Enter filename to append text: ");
    scanf("%s", filename);

    // Open file in append mode
    file = fopen(filename, "a");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Clear input buffer
    while (getchar() != '\n');

    // Take new line input from user
    printf("Enter text to append: ");
    fgets(newLine, sizeof(newLine), stdin);

    // Append the line to file
    fprintf(file, "%s", newLine);

    fclose(file);

    printf("File updated successfully with appended text.\n");
    return 0;
}
