#include <stdio.h>

int main() {
    int n, i;
    int first = 0, second = 1, next;
    int sum = 0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 0; i < n; i++) {
        if (i == 0) {
            printf("%d", first);
            sum = sum + first;
        } else if (i == 1) {
            printf(", %d", second);
            sum = sum + second;
        } else {
            next = first + second;
            printf(", %d", next);
            sum = sum + next;
            first = second;
            second = next;
        }
    }

    printf("\n");
    printf("Sum: %d\n", sum);

    return 0;
}