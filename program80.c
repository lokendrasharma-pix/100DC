// 81:Count characters in a string without using built-in length function



#include <stdio.h>

int main() {
    // Declare and initialize the string
    char str[] = "Hello, World!";
    
    // Initialize a counter for the length
    int length = 0;
    
    // Iterate through the string until the null terminator is found
    // The loop continues as long as the character at the current index is not '\0'
    while (str[length] != '\0') {
        length++;
    }
    
    // Print the final count
    printf("The length of the string is: %d\n", length);
    
    return 0;
}
