#include <stdio.h>

int fact_rec(int n) {
    if(n==0)
        return 1;
    else
        return n * fact_rec(n - 1);
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);
    if (n<0){
        printf("Invalid input ");
    }
    printf("Factorial (Recursive) = %d\n", fact_rec(n));

    return 0;
}
