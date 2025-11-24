#include <stdio.h>
#include <string.h>

int lengthOfLongestSubstring(char s[]) {
    int n = strlen(s);
    int lastIndex[256];
    for (int i = 0; i < 256; i++) {
        lastIndex[i] = -1;
    }

    int maxLength = 0;
    int start = 0; // Start index of current window

    for (int i = 0; i < n; i++) {
        unsigned char ch = s[i];
        // If character repeated inside current window, move start
        if (lastIndex[ch] >= start) {
            start = lastIndex[ch] + 1;
        }
        lastIndex[ch] = i;

        int windowLength = i - start + 1;
        if (windowLength > maxLength) {
            maxLength = windowLength;
        }
    }

    return maxLength;
}

int main() {
    char s[1001];
    printf("Enter the string: ");
    scanf("%s", s);

    int result = lengthOfLongestSubstring(s);
    printf("%d\n", result);

    return 0;
}
