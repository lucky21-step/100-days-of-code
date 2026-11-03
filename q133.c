#include <stdio.h>

enum Month {
    JAN = 1, FEB, MAR, APR, MAY, JUN,
    JUL, AUG, SEP, OCT, NOV, DEC
};

int main() {
    enum Month m;
    char month[4];

    scanf("%s", month);

    if (strcmp(month, "FEB") == 0) {
        printf("28 or 29 days");
    }
    else if (strcmp(month, "APR") == 0 ||
             strcmp(month, "JUN") == 0 ||
             strcmp(month, "SEP") == 0 ||
             strcmp(month, "NOV") == 0) {
        printf("30 days");
    }
    else {
        printf("31 days");
    }

    return 0;
}