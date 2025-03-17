#include <stdio.h>

int main(void)
{
    float amount, taxed;

    printf("Enter an amount: ");
    scanf("%f", &amount);

    taxed = amount * 1.05f;

    printf("With tax added: %.2f\n", taxed);
    return 0;
}
