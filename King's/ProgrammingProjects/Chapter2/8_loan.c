// This program calculates the remaining balance after the first 3 payments.

#include <stdio.h>

int main(void)
{
    float amount, interest, monthly_interest, monthly_payment, left;

    printf("Enter amount of loan: ");
    scanf("%f", &amount);

    printf("Enter interest rate: ");
    scanf("%f", &interest);
    
    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    // printf("\namount: %.2f\ninterest: %.2f\nmonthly payment: %.2f\n", amount, interest, monthly_payment);

    monthly_interest = (interest * 0.01) / 12.0f;

    // printf("monthly interest: %.2f\n", monthly_interest);
    left = amount * (1 + monthly_interest)  - monthly_payment;
    
    printf("\nBalance remaining after first payment: %.2f\n", left);


    left = left * (1 + monthly_interest) - monthly_payment;
    
    printf("Balance remaining after second payment: %.2f\n", left);


    left = left * (1 + monthly_interest) - monthly_payment;
    
    printf("Balance remaining after third payment: %.2f\n", left);
  
    return 0;
}
