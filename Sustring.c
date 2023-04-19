#include <stdio.h>
#include <string.h>

int main()
{
    char string[100];
    printf("Enter a string: ");
    scanf("%s", string);
    
    int length = strlen(string);
    
    printf("All substrings of '%s' are:\n", string);
    
    // loop through all possible substrings
    for (int i = 0; i < length; i++) {
        for (int j = i; j < length; j++) {
            // print substring using pointers
            printf("%.*s\n", j - i + 1, string + i);
        }
    }
    
    return 0;
}
