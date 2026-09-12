#include <stdio.h>

int main() {
    int n, i, pos, element;

    scanf("%d", &n);

    int arr[n + 1];

    // Input array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input position and element
    scanf("%d %d", &pos, &element);

    // Shift elements to the right
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert element
    arr[pos] = element;

    // Print updated array
    for (i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}