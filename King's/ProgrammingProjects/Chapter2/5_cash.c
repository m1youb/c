#include <stdio.h>

int main(void)
{
    int amount, twenty, ten, five, one;

    printf("Enter a dollar amount: ");
    scanf("%d", &amount);

    twenty = amount / 20;
    ten = ( amount - twenty * 20 ) / 10;
    five = ( amount - twenty * 20 - ten * 10 ) / 5;
    one = ( amount -twenty * 20 - ten * 10 - five * 5);

    printf("\n20$ bills: %d\n10$ bills: %d\n5$ bills: %d\n1$ bills: %d\n", twenty, ten, five, one);
    return 0;
}
