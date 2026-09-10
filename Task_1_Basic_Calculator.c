#include <stdio.h>

int main() {
    int choice;
    float a, b, result;

    printf("Enter first number: ");
    scanf("%f", &a);

    printf("Enter second number: ");
    scanf("%f", &b);

    printf("\n--- Calculator Menu ---\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            result = a + b;
            printf("Addition = %.2f", result);
            break;

        case 2:
            result = a - b;
            printf("Subtraction = %.2f", result);
            break;

        case 3:
            result = a * b;
            printf("Multiplication = %.2f", result);
            break;

        case 4:
            if(b != 0) {
                result = a / b;
                printf("Division = %.2f", result);
            } else {
                printf("Division by zero is not possible.");
            }
            break;

        default:
            printf("Invalid choice!");
    }

    return 0;
}
