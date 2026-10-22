#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];

    fgets(str, sizeof(str), stdin);

    int i = 0;
    int newWord = 1;

    while (str[i] != '\0') {
        if (isspace((unsigned char)str[i])) {
            newWord = 1;
        } else {
            if (newWord) {
                str[i] = toupper((unsigned char)str[i]);
                newWord = 0;
            }
        }
        i++;
    }

    printf("%s", str);

    return 0;
}