#include <stdio.h>
int main() {
   float totalSellingPrice, totalProfit, costPriceAll, costPriceOne;
    // Step 1: Input total selling price and total profit
    printf("Enter the total selling price of 15 items: ");
    scanf("%f", &totalSellingPrice);
    printf("Enter the total profit earned on 15 items: ");
    scanf("%f", &totalProfit);
    // Step 2: Calculate total cost price and cost price per item
    costPriceAll = totalSellingPrice - totalProfit;
    costPriceOne = costPriceAll / 15;
    // Step 3: Display result
    
    printf("Total Selling Price of 15 items : %.2f\n", totalSellingPrice);
    printf("Total Profit on 15 items        : %.2f\n", totalProfit);
    printf("Total Cost Price of 15 items    : %.2f\n", costPriceAll);
    printf("Cost Price of One Item          : %.2f\n", costPriceOne);
    
    return 0;
}
/*code by yug
Enter the total selling price of 15 items: 20000
Enter the total profit earned on 15 items: 5000
Total Selling Price of 15 items : 20000.00
Total Profit on 15 items        : 5000.00
Total Cost Price of 15 items    : 15000.00
Cost Price of One Item          : 1000.00*/