//15. Write a program in C to find the largest and smallest words in a string.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

main() {
    char str[1000];
    char smallestWord[100], largestWord[100];
    int i = 0, j = 0;
    int minLen = 100, maxLen = 0;
    int wordStart = 0, wordEnd = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    while (str[i] != '\0') {
        if (isspace(str[i]) || str[i + 1] == '\0') {
            wordEnd = i; 

            int wordLen = wordEnd - wordStart + 1;

            if (wordLen < minLen) {
                minLen = wordLen;
                strncpy(smallestWord, &str[wordStart], wordLen);
                smallestWord[wordLen] = '\0';
            }
            if (wordLen > maxLen) {
                maxLen = wordLen;
                strncpy(largestWord, &str[wordStart], wordLen);
                largestWord[wordLen] = '\0';
            }

            wordStart = i + 1;
        }

        i++;
    }

    printf("Smallest word: %s\n", smallestWord);
    printf("Largest word: %s\n", largestWord);

}

