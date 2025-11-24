#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file = fopen("text.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    int vowels = 0, consonants = 0;
    char ch;

    while ((ch = fgetc(file)) != EOF) {
        if (isalpha(ch)) {
            ch = tolower(ch);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    fclose(file);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
