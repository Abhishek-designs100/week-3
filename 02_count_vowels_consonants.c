#include <stdio.h>
#include <ctype.h>

int main(void) {
    char str[500];
    int vowels = 0, consonants = 0;

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        printf("Input error.\n");
        return 1;
    }

    for (char *p = str; *p != '\0'; p++) {
        unsigned char ch = (unsigned char)*p;

        if (isalpha(ch)) {
            ch = (unsigned char)tolower(ch);
            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    return 0;
}
