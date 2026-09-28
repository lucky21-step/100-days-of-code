#include <stdio.h>

int main() {
    char name[100];
    
    fgets(name, sizeof(name), stdin);

    printf("%c.", name[0]);

    for (int i = 1; name[i] != '\0'; i++) {
        if (name[i] == ' ' && name[i + 1] != '\0') {
            printf("%c.", name[i + 1]);
        }
    }

    return 0;
}