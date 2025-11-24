#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool areAnagrams(char s[], char t[]) {
    int freq[26] = {0};

    int lenS = strlen(s);
    int lenT = strlen(t);

    if (lenS != lenT) {
        return false;
    }

    for (int i = 0; i < lenS; i++) {
        freq[s[i] - 'a']++;
        freq[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            return false;
        }
    }

    return true;
}

int main() {
    char s[1001], t[1001];
    printf("Enter string s: ");
    scanf("%s", s);
    printf("Enter string t: ");
    scanf("%s", t);

    if (areAnagrams(s, t)) {
        printf("Anagram\n");
    } else {
        printf("Not Anagram\n");
    }

    return 0;
}
