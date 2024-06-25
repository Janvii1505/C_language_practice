//18. Write a C program to calculate profit and loss on a transaction.
#include <stdio.h>
int main() {
    float costPrice, sellPrice, p, l;

    printf("Enter the Cost Price: ");
    scanf("%f", &costPrice);
    printf("Enter the Selling Price: ");
    scanf("%f", &sellPrice);

    if (sellPrice > costPrice) {
        p = sellPrice - costPrice;
        printf("\n\n\t Profit: %.2f", p);
    } else if (sellPrice < costPrice) {
        l = costPrice - sellPrice;
        printf("\n\n\t Loss: %.2f", l);
    } else {
        printf("No Profit No Loss\n");
    }

}
