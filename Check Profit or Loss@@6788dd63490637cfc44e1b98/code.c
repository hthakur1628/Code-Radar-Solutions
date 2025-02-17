#include <stdio.h>

int main() {
    float cost_price, selling_price, profit_or_loss;

    // Input cost price and selling price from the user
    printf("Enter the cost price: ");
    scanf("%f", &cost_price);
    printf("Enter the selling price: ");
    scanf("%f", &selling_price);

    // Calculate profit or loss
    profit_or_loss = selling_price - cost_price;

    // Determine and display whether it's a profit or loss
    if (profit_or_loss > 0) {
        printf("Profit: %.2f\n", profit_or_loss);
    } else if (profit_or_loss < 0) {
        printf("Loss: %.2f\n", -profit_or_loss); // Use -profit_or_loss to show positive value for loss
    } else {
        printf("No Profit, No Loss\n");
    }

    return 0;
}
