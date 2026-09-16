#include <stdio.h>

int main() {
    int a[10][10], b[10][10], sum[10][10];
    int r, c, i, j;

    // Input first matrix
    scanf("%d %d", &r, &c);

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Input second matrix
    int r2, c2;
    scanf("%d %d", &r2, &c2);

    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Add matrices
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    // Print result
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d", sum[i][j]);
            if (j < c - 1)
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}