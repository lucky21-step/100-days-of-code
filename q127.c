#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *input, *output;
    int ch;

    input = fopen("input.txt", "r");

    if (input == NULL) {
        printf("Error opening input.txt");
        return 1;
    }

    output = fopen("output.txt", "w");

    if (output == NULL) {
        printf("Error opening output.txt");
        fclose(input);
        return 1;
    }

    while ((ch = fgetc(input)) != EOF) {
        fputc(toupper((unsigned char)ch), output);
    }

    printf("File converted to uppercase successfully.");

    fclose(input);
    fclose(output);

    return 0;
}