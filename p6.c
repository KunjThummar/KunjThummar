#include <stdio.h>

void main() {
    float num1 = 10.0, num2 = 5.0;
    char o;

    // Display the available operations
    printf("Enter an operation (+, -, *, /) : ");
    scanf("%c",&o);

    // Switch case to handle different operations
    switch (o)
     {
        case '+':
            printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
            break;
        case '/':
            // Check for division by zero
            if (num2 != 0) {
                printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid operation. Please enter one of +, -, *, /.\n");
    }
    printf("\n\nprogrammer : Kunj Thummar\nID : 24ce128");
}
