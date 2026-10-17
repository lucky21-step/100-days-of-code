#include <stdio.h>
#include <string.h>

int main() {
    char s[10000];
    scanf("%9999s", s);

    int n = strlen(s);
    int last[256];

    for (int i = 0; i < 256; i++) {
        last[i] = -1;
    }

    int start = 0, maxLen = 0;

    for (int i = 0; i < n; i++) {
        unsigned char ch = s[i];

        if (last[ch] >= start) {
            start = last[ch] + 1;
        }

        last[ch] = i;

        int len = i - start + 1;
        if (len > maxLen) {
            maxLen = len;
        }
    }

    printf("%d", maxLen);

    return 0;
}