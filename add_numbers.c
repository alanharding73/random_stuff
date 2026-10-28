#include <stdio.h>

int main(void) {
    double num1, num2;

    printf("Enter the first number: ");
    if (scanf("%lf", &num1) != 1) {
        printf("Invalid input. Please enter valid numbers.\n");
        return 1;
    }

    printf("Enter the second number: ");
    if (scanf("%lf", &num2) != 1) {
        printf("Invalid input. Please enter valid numbers.\n");
        return 1;
    }

    printf("The sum of %g and %g is: %g\n", num1, num2, num1 + num2);
    return 0;
}
