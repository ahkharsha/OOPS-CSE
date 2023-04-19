#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character or a number: ");
    scanf("%c", &ch);

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("The input is a character.\n");

        if (ch >= 'a' && ch <= 'z') {
            printf("The character is in lower case.\n");
        } else {
            printf("The character is in upper case.\n");
        }
    } else if (ch >= '0' && ch <= '9') {
        printf("The input is a number.\n");
    } else {
        printf("The input is neither a character nor a number.\n");
    }

    return 0;
}
