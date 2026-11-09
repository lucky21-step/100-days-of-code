#include <stdio.h>

enum Color {
    RED,
    YELLOW,
    GREEN
};

int main() {
    enum Color i;

    for (i = RED; i <= GREEN; i++) {
        if (i == RED)
            printf("RED=%d ", i);
        else if (i == YELLOW)
            printf("YELLOW=%d ", i);
        else if (i == GREEN)
            printf("GREEN=%d", i);
    }

    return 0;
}