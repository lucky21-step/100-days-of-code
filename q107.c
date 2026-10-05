#include <stdio.h>

int main() {
    int arr[] = {1, 3, 2, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++) {
        int previousGreater = -1;

        // Check elements on the left, starting from nearest
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                previousGreater = arr[j];
                break;  // Nearest greater element found
            }
        }

        // Print comma separated
        if (i > 0) {
            printf(", ");
        }
        printf("%d", previousGreater);
    }

    return 0;
}