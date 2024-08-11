#include <stdio.h>

int findFirstOccurrence(char str[], char ch) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            return i;
        }
    }
    return -1; // Character not found
}

int main() {
    char str[] = "Hello, World!";
    char ch = 'o';
    int index = findFirstOccurrence(str, ch);
    if (index != -1) {
        printf("First occurrence of '%c' is at index %d\n", ch, index);
    } else {
        printf("Character '%c' not found in the string\n", ch);
    }
    return 0;
}
