#include <stdio.h>

// Function to add two numbers
int add(int a, int b) {
    return a + b;
}

// Function to subtract two numbers
int subtract(int a, int b) {
    return a - b;
}

// Function to multiply two numbers
int multiply(int a, int b) {
    return a * b;
}

// Function to divide two numbers
float divide(int a, int b) {
    if (b != 0)
        return (float)a / b; // Typecasting to float for division
    else
        printf("Error: Division by zero is not allowed.\n");
    return 0;
}

// Function to find the remainder of division (modulus)
int modulus(int a, int b) {
    return a % b;
}

int main() {
    int f = 8;
    int g = 3;

    int sum = add(f, g);
    int difference = subtract(f, g);
    int product = multiply(f, g);
    float quotient = divide(f, g);
    int remainder = modulus(f, g);

    printf("The sum of %d and %d is: %d\n", f, g, sum);
    printf("The difference between %d and %d is: %d\n", f, g, difference);
    printf("The product of %d and %d is: %d\n", f, g, product);
    printf("The quotient of %d divided by %d is: %.2f\n", f, g, quotient);
    printf("The remainder of %d divided by %d is: %d\n", f, g, remainder);

    return 0;
}
