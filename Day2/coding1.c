
#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    int n, i, left, right;
    int start = 0, maxLen = 1;

    printf("Enter a string: ");
    scanf("%999s", s);

    n = strlen(s);

    for (i = 0; i < n; i++) {
        left = i;
        right = i;

        while (left >= 0 && right < n &&
               s[left] == s[right]) {
            if (right - left + 1 > maxLen) {
                maxLen = right - left + 1;
                start = left;
            }
            left--;
            right++;
        }

        left = i;
        right = i + 1;

        while (left >= 0 && right < n &&
               s[left] == s[right]) {
            if (right - left + 1 > maxLen) {
                maxLen = right - left + 1;
                start = left;
            }
            left--;
            right++;
        }
    }

    printf("Longest Palindromic Substring: ");
    for (i = start; i < start + maxLen; i++) {
        printf("%c", s[i]);
    }
    printf("\n");

    return 0;
}


Output:
Enter a string: babad
Longest Palindromic Substring: bab
