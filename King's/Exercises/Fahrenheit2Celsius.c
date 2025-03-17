#include <stdio.h>

#define FREEZING_POINT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main(void) {
    printf("Enter Fahrenheit temperature: ");
    float ftemp;
    scanf("%f", &ftemp);
    float ctemp;
    ctemp = (ftemp - FREEZING_POINT) * SCALE_FACTOR;
    printf("Celsius equivalent: %.1f\n", ctemp);
    return 0;
}
