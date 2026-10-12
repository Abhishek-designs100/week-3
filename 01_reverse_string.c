#include <stdio.h>

int main(void) {
    char str[200];
    char *left, *right;
    char temp;

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        printf("Input error.\n");
        return 1;
    }

    /* Remove the newline added by fgets, if present. */
    for (char *p = str; *p != '\0'; p++) {
        if (*p == '\n') {
            *p = '\0';
            break;
        }
    }

    left = str;
    right = str;
    while (*right != '\0') {
        right++;
    }

    if (right != str) {
        right--;
    }

    while (left < right) {
        temp = *left;
        *left = *right;
        *right = temp;
        left++;
        right--;
    }

    printf("Reversed string: %s\n", str);
    return 0;
}
