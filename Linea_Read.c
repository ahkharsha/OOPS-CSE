#include <stdio.h>
#include <string.h>

#define MAX_LINE_LENGTH 100

int main() {
    char line[MAX_LINE_LENGTH];
    char end_str[] = "end\n";
    int end_len = strlen(end_str);
    printf("Enter input (type \"end\" to stop):\n");
    while (fgets(line, MAX_LINE_LENGTH, stdin)) {
        if (strncmp(line, end_str, end_len) == 0) {
            break;
        }
        printf("You entered %s", line);
    }
    printf("Program ended.\n");
    return 0;
}
