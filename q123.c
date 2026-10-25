#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;
    int lastChar = '\0';

    fp = fopen("sample.txt", "r");

    if (fp == NULL) {
        printf("Unable to open file");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        characters++;
        lastChar = ch;

        if (ch == '\n') {
            lines++;
        }

        if (isspace(ch)) {
            inWord = 0;
        } else if (!inWord) {
            words++;
            inWord = 1;
        }
    }

    if (characters > 0 && lastChar != '\n') {
        lines++;
    }

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    fclose(fp);

    return 0;
}