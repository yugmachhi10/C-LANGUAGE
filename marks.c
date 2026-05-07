#include <stdio.h>
int main() {
    int m1, m2, m3, m4, m5;
    float aggregate, percent;
    printf("Enter marks of 5 subjects: ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
    aggregate = m1 + m2 + m3 + m4 + m5;
    percent = (aggregate / 500) * 100;
    printf("Aggregate Marks = %.2f\n", aggregate);
    printf("Percentage = %.2f%%", percent);
    return 0;
}
/* code by yug
Enter marks of 5 subjects: 66
56
78
45
96
Aggregate Marks = 341.00
Percentage = 68.20%*/