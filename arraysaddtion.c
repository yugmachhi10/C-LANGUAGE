#include <stdio.h>

int main() {
    int rows, cols, i, j;

    // Input number of rows and columns
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int a[10][10], b[10][10], sum[10][10];

    // Input elements of first matrix
    printf("\nEnter elements of first matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("a[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    // Input elements of second matrix
    printf("\nEnter elements of second matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("b[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }

    // Add both matrices
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    // Display the result
    printf("\nSum of two matrices:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
 /*code by yug 
 Enter number of rows: 2
Enter number of columns: 3

Enter elements of first matrix:
a[1][1]: 1
a[1][2]: 2
a[1][3]: 3
a[2][1]: 4
a[2][2]: 5
a[2][3]: 6

Enter elements of second matrix:
b[1][1]: 1
b[1][2]: 2
b[1][3]: 3
b[2][1]: 4
b[2][2]: 5
b[2][3]: 6

Sum of two matrices:
2       4       6
8       10      12*/