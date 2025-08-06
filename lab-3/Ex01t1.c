#include <stdio.h>

int main() {
    int num1, num2, choice, result;

    printf("Enter Num1: ");
    scanf("%d", &num1);
    printf("Enter Num2: ");
    scanf("%d", &num2);

    printf("Calculator Menu:\n");
    printf("1. +\n");
    printf("2. -\n");
    printf("3. *\n");
    printf("4. /\n");
    printf("5. %%\n");

    printf("Choose menu: ");
    scanf("%d", &choice);

    if (choice == 1) {
        result = num1 + num2;
        printf("Ans : Num1 + Num2 = %d\n", result);
    } else if (choice == 2) {
        result = num1 - num2;
        printf("Ans : Num1 - Num2 = %d\n", result);
    } else if (choice == 3) {
        result = num1 * num2;
        printf("Ans : Num1 * Num2 = %d\n", result);
    } else if (choice == 4) {
        if (num2 != 0)
            printf("Ans : Num1 / Num2 = %.2f\n", (float)num1 / num2);
        else
            printf("Division by zero error\n");
    } else if (choice == 5) {
        result = num1 % num2;
        printf("Ans : Num1 %% Num2 = %d\n", result);
    } else {
        printf("Invalid Choice\n");
    }

    return 0;
}