#include <stdio.h>

int main() {
    long long num;
    int count[10] = {0};
    int digit, max = 0, result = 0;

    scanf("%lld", &num);

    // Handle 0 as input
    if (num == 0) {
        printf("0");
        return 0;
    }

    // Count each digit
    while (num > 0) {
        digit = num % 10;
        count[digit]++;
        num = num / 10;
    }

    // Find the digit with maximum occurrence
    for (int i = 0; i < 10; i++) {
        if (count[i] > max) {
            max = count[i];
            result = i;
        }
    }

    printf("%d", result);

    return 0;
}