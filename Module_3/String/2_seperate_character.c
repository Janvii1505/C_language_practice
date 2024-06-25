//2. Write a program in C to separate individual characters from a string.
#include <stdio.h>

int main() {
    char str[100],i;

    printf("Enter a string: ");
    gets(str);

    str[strcspn(str, "\n")] = 0;

    printf("Individual characters:\n");
    for (i = 0; str[i] != '\0'; i++) {
        printf("%c\n", str[i]);
    }

}

