#include <stdio.h>
int main() {
    float f, c;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);
    c = (f - 32) * 5 / 9;
    printf("Temperature in Celsius: %.2f", c);
    return 0;
}
/*
code by yug machhi
Enter temperature in Fahrenheit: 100
Temperature in Celsius: 37.78*/