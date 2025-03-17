#include <stdio.h>

int main(void)
{
    int x, result;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    result = ((((3*x)*x - 5)*x - 1)*x + 7)*x - 6;
    printf("The result of the polynomial is: %d\n", result);
    return 0;
}
