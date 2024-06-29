#include <stdio.h>

void sum_even_numbers(int n);
void sum_odd_numbers(int n);

int main() {
    int choice, n;

    while (1) {
        printf("Total number to sum: ");
        scanf("%d", &n);

        printf("1. Even numbers\n");
        printf("2. Odd numbers\n");
        printf("3. Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                sum_even_numbers(n);
                break;
            case 2:
                sum_odd_numbers(n);
                break;
            case 3:
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

void sum_even_numbers(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += 2 * i;
    }
    printf("Sum: %d\n", sum);
}

void sum_odd_numbers(int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += 2 * i + 1;
    }
    printf("Sum: %d\n", sum);
}