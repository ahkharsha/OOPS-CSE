#include <stdio.h>
#include <ctype.h>

#define MAX_LINE_LENGTH 100

int main() {
    char line[MAX_LINE_LENGTH];
    int char_count = 0;
    int word_count = 0;
    int line_count = 0;
    printf("Enter text (type \"end\" to finish giving the input):\n");
    while (fgets(line, MAX_LINE_LENGTH, stdin)) {
        if (strcmp(line, "end\n") == 0) {
            break;
        }
        line_count++;
        char_count += strlen(line);
        int in_word = 0;
        for (int i = 0; line[i] != '\0'; i++) {
            if (isspace(line[i])) {
                in_word = 0;
            } else if (!in_word) {
                in_word = 1;
                word_count++;
            }
        }
    }
    printf("Number of characters: %d\n", char_count);
    printf("Number of words: %d\n", word_count);
    printf("Number of lines: %d\n", line_count);
    return 0;
}
