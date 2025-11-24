#include <stdio.h>
#include <string.h>

int main() {
    FILE *file = fopen("info.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    char name[50];
    int age;

    // Taking input from user
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    // Remove newline character from fgets if present
    size_t len = strlen(name);
    if (len > 0 && name[len-1] == '\n') {
        name[len-1] = '\0';
    }

    printf("Enter your age: ");
    scanf("%d", &age);

    // Writing to file
    fprintf(file, "Name: %s, Age: %d\n", name, age);
    fclose(file);

    printf("File created successfully! Data written to info.txt\n");
    return 0;
}
