// Computes the dimensional weight of a box from input provided by the user

#include <stdio.h>

int main(void) 
{
    int height, length, width;

    printf("Enter the height: ");
    scanf("%d", &height);

    printf("Enter the length: ");
    scanf("%d", &length);
    
    printf("Enter the width: ");
    scanf("%d", &width);

    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", (height * length * width));
    printf("Dimensional weight (pounds): %d\n", (((height * length * width)+165) / 166));    return 0;
}
