#include <stdio.h>

int main() {
    int n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    // Upper half of pyramid (expanding)
    for (int i = 0; i <= n; i++) {
        // Print spaces for alignment
        for (int space = 0; space < n - i; space++) {
            printf(" ");
        }

        // Print numbers from i down to 0, then back up to i
        for (int j = i; j >= 0; j--) {
            printf("%d", j);
        }
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    // Lower half of pyramid (contracting)
    for (int i = n - 1; i >= 0; i--) {
        // Print spaces for alignment
        for (int space = 0; space < n - i; space++) {
            printf(" ");
        }

        // Print numbers from i down to 0, then back up to i
        for (int j = i; j >= 0; j--) {
            printf("%d", j);
        }
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}