#include <stdio.h>
#include <string.h>


int bruteForcePatternMatching(char *text, char *pattern) {
    int n = strlen(text);   // Length of the text
    int m = strlen(pattern); // Length of the pattern


    for (int i = 0; i <= n - m; i++) {
        int j;

        for (j = 0; j < m; j++) {
            if (text[i + j] != pattern[j]) {
                break;
            }
        }


        if (j == m) {
            return i;
        }
    }

    return -1;
}

int main() {
    char text[] = "ABABDABACDABABCABAB";
    char pattern[] = "ABABCABAB";

    int result = bruteForcePatternMatching(text, pattern);

    if (result != -1) {
        printf("Pattern found at index %d\n", result);
    } else {
        printf("Pattern not found\n");
    }

    return 0;
}
