#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i, start = 0;

    fgets(name, sizeof(name), stdin);

    // Remove newline
    name[strcspn(name, "\n")] = '\0';

    // Print initials of all words except surname
    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ') {
            printf("%c.", name[start]);
            start = i + 1;
        }
    }

    // Print surname in full
    printf("%s", &name[start]);

    return 0;
}