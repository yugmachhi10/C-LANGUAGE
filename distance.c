#include <stdio.h>
int main() {
    float km, m, ft, inch, cm;
    printf("Enter distance between two cities (in km): ");
    scanf("%f", &km);
    m = km * 1000;
    cm = m * 100;
    inch = cm / 2.54;
    ft = inch / 12;
    printf("Distance in meters: %.2f\n", m);
    printf("Distance in feet: %.2f\n", ft);
    printf("Distance in inches: %.2f\n", inch);
    printf("Distance in centimeters: %.2f\n", cm);
    return 0;
}
/*code by yug
Enter distance between two cities (in km): 120
Distance in meters: 120000.00
Distance in feet: 393700.78
Distance in inches: 4724409.50
Distance in centimeters: 12000000.00*/