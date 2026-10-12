#include <stdio.h>
#include <ctype.h>

#define MAX_TEXT 2000

int main(void) {
    char text[MAX_TEXT];
    int words = 0;
    int in_word = 0;

    printf("Enter a sentence or paragraph (up to %d characters):\n", MAX_TEXT - 1);
    if (fgets(text, sizeof(text), stdin) == NULL) {
        printf("Input error.\n");
        return 1;
    }

    /* Pointer traversal: a word starts at a non-space character
       when we were not already inside a word. */
    for (char *p = text; *p != '\0'; p++) {
        if (isspace((unsigned char)*p)) {
            in_word = 0;
        } else if (!in_word) {
            words++;
            in_word = 1;
        }
    }

    printf("Word count: %d\n", words);
    return 0;
}
