#include <stdio.h>

int main() {
    int arr[] = {1, 3, 2, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++) {
        int nextGreater = -1;

        // Check every element on the right
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                nextGreater = arr[j];
                break;  // Nearest greater element found
            }
        }

        // Print comma separated
        if (i > 0) {
            printf(", ");
        }
        printf("%d", nextGreater);
    }

    return 0;
}