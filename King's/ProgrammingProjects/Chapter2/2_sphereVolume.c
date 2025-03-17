#include <stdio.h>

int main(void)
{
    int radius = 10;
    float volume = (4.0f/3.0f) * 3.14f * radius * radius * radius;
    printf("The Volume of a %dm radius is: %f\n", radius, volume);
    return 0;
}
