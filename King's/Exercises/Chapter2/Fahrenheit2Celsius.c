// Converts a Fahrenheit temperature to Celsius

#include <stdio.h>

#define FREEZING_POINT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main(void) 
{
    float ftemp, ctemp;

    printf("Enter Fahrenheit temperature: ");
    scanf("%f", &ftemp);

    ctemp = (ftemp - FREEZING_POINT) * SCALE_FACTOR;
    
    printf("Celsius equivalent: %.1f\n", ctemp);

    return 0;
}
