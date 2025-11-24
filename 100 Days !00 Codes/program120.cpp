#include <stdio.h>
#include <ctype.h>

void toSentenceCase(char str[]) {
    int i = 0;

    // Capitalize first character if alphabetic
    if (str[i] != '\0' && isalpha(str[i])) {
        str[i] = toupper(str[i]);
        i++;
    }

    // Iterate through the string and capitalize first letter of each word
    for (; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i + 1] != '\0') {
            // Capitalize the next character after a space if alphabetic
            if (isalpha(str[i + 1])) {
                str[i + 1] = toupper(str[i + 1]);
                i++; // skip the next character since it has been processed
            }
        } else {
            // Convert rest characters to lowercase if alphabetic
            if (isalpha(str[i])) {
                str[i] = tolower(str[i]);
            }
        }
    }
}

int main() {
    char str[1000];
    printf("Enter the string:\n");
    fgets(str, sizeof(str), stdin);

    // Remove newline if present
    int len = 0;
    while (str[len] != '\0') {
        if (str[len] == '\n') {
            str[len] = '\0';
            break;
        }
        len++;
    }

    toSentenceCase(str);
    printf("%s\n", str);

    return 0;
}
