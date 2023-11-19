#include <stdio.h>

int main() {
    char inputString[100]; // Array to store the input string
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin); // Get the input string from the user

    printf("Characters corresponding to ASCII codes from 32 to 255:\n");

    // Iterate through each character in the input string and print only those that meet the condition
    for (int i = 0; inputString[i] != '\0'; i++) {
        int asciiCode = (int)inputString[i]; // Get the ASCII code for the current character

        // Check if the code satisfies the condition (from 32 to 255)
        if (asciiCode >= 32 && asciiCode <= 255) {
            printf("%c (ASCII code %d)\n", inputString[i], asciiCode);
        } else {
            printf("Error: Invalid character '%c' (ASCII code %d)\n", inputString[i], asciiCode);
        }
    }

    return 0;
}




