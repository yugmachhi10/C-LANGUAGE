//code for transpose for transpose of matrix 

#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int matrix[10][10], transpose[10][10];

    // Input elements
    printf("\nEnter elements of the matrix (%d elements total):\n", rows * cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Compute transpose
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Display original matrix
    printf("\nOriginal Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // Display transpose
    printf("\nTranspose of Matrix:\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}

/*code by yug 
Enter number of rows: 2
Enter number of columns: 3

Enter elements of the matrix (6 elements total):
Element [1][1]: 2
Element [1][2]: 3
Element [1][3]: 4
Element [2][1]: 5
Element [2][2]: 6
Element [2][3]: 7

Original Matrix:
2       3       4
5       6       7

Transpose of Matrix:
2       5
3       6
4       7 */