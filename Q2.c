Q1: Write a program to input two numbers and display their sum.

#include <stdio.h>

int main() {
    int num1, num2;
    int sum, difference, product;
    float quotient;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;

    if (num2 != 0) {
        quotient = (float)num1 / num2;
    } else {
        printf("Division by zero is not allowed.\n");
        quotient = 0.0;
    }

    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", difference);
    printf("Product = %d\n", product);
    if (num2 != 0) {
        printf("Quotient = %.2f\n", quotient);
    }

    return 0;
}
