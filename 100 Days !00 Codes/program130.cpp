#include <stdio.h>

int main() {
    FILE *file;
    int n, i;
    char name[50];
    int roll, marks;

    // Number of students
    printf("Enter number of students: ");
    scanf("%d", &n);

    // Writing student records to file
    file = fopen("students.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("Enter name, roll number and marks for student %d: ", i + 1);
        scanf("%s %d %d", name, &roll, &marks);
        fprintf(file, "%s %d %d\n", name, roll, marks);
    }
    fclose(file);

    // Reading student records from file and displaying
    file = fopen("students.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    printf("\nStudent Records:\n");
    while (fscanf(file, "%s %d %d", name, &roll, &marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %d\n", name, roll, marks);
    }

    fclose(file);
    return 0;
}
