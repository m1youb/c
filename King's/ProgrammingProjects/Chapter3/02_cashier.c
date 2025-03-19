#include <stdio.h>

int main(void)
{
    int itemNumber, day, month, year;
    float price;

    printf("Enter item number: ");
    scanf("%d", &itemNumber);

    printf("Enter unit price: ");
    scanf("%f", &price);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("\nItem\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n%d\t\t$ %5.2f\t\t%d/%d/%d\n", itemNumber, price, month, day, year);
    return 0;
}