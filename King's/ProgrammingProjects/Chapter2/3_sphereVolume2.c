#include <stdio.h>

int main(void)
{
    int radius;

    printf("Enter the radius of the sphere: ");
    scanf("%d", &radius);

    float volume = (4.0f/3.0f) * 3.14f * radius * radius * radius;

    printf("The Volume of a %dm radius is: %.2f\n", radius, volume);
    return 0;
}
