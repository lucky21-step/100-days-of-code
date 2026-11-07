#include <stdio.h>

enum Menu {
    ADD,
    SUBTRACT,
    MULTIPLY
};

int main() {
    enum Menu choice;
    char operation[20];
    int a, b;

    scanf("%s %d %d", operation, &a, &b);

    if (operation[0] == 'A')
        choice = ADD;
    else if (operation[0] == 'S')
        choice = SUBTRACT;
    else
        choice = MULTIPLY;

    switch (choice) {
        case ADD:
            printf("%d", a + b);
            break;

        case SUBTRACT:
            printf("%d", a - b);
            break;

        case MULTIPLY:
            printf("%d", a * b);
            break;
    }

    return 0;
}