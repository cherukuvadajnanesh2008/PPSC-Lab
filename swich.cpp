#include <stdio.h>

int main() {
    char op;
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &op);   // space before %c handles leftover newline

    printf("Enter second number: ");
    scanf("%d", &b);

    switch(op) {
        case '+':
            printf("Result = %d\n", a + b);
            break;
        case '-':
            printf("Result = %d\n", a - b);
            break;
        case '*':
            printf("Result = %d\n", a * b);
            break;
        case '/':
            if(b != 0)
                printf("Result = %d\n", a / b);
            else
                printf("Error! Division by zero not allowed.\n");
            break;
        case '%':
            if(b != 0)
                printf("Result = %d\n", a % b);
            else
                printf("Error! Modulus by zero not allowed.\n");
            break;
        default:
            printf("Invalid operator!\n");
    }

    return 0;
}
