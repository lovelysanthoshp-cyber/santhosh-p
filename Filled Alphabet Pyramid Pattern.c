#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        // Print leading spaces
        for (int space = 1; space <= 2 * (N - i); space++) {
            printf(" ");
        }

        // Print alphabets
        for (int ch = 0; ch < 2 * i - 1; ch++) {
            printf("%c", 'A' + ch);
            if (ch < 2 * i - 2) {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}
