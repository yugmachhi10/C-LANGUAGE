#include <stdio.h>
int main() {
    float a, b;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    printf("Addition = %.2f\n", a + b);
    printf("Subtraction = %.2f\n", a - b);
    printf("Multiplication = %.2f\n", a * b);
    printf("Division = %.2f\n", a / b);
    return 0;
}
/* code by yug
Enter two numbers: 3
4
Addition = 7.00
Subtraction = -1.00
Multiplication = 12.00
Division = 0.758*/