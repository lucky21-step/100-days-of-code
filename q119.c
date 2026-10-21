
#include <stdio.h>

int main() {
    int n, i, j;
    scanf("%d", &n);

    int nums[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < i; j++) {
            if (nums[i] == nums[j]) {
                printf("%d", nums[i]);
                return 0;
            }
        }
    }

    return 0;
}
