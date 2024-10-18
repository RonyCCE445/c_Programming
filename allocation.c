#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void toggle_vowels(char *str) {
    while (*str) {
        if (strchr("aeiouAEIOU", *str)) { 
            if (islower(*str)) {
                *str = toupper(*str); 
            } else {
                *str = tolower(*str); 
            }
        }
        str++;
    }
}

int main() {
    char *input = (char *)calloc(100, sizeof(char)); 
    if (input == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    printf("Enter a string (input ends with Enter): ");
    fgets(input, 100, stdin);


    size_t len = strlen(input);
    if (len > 0 && input[len - 1] == '\n') {
        input[len - 1] = '\0';
    }

    toggle_vowels(input);

    printf("Modified string: %s\n", input);

    free(input); 
    return 0;
}

