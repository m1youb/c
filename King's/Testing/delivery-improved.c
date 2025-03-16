// Computes the dimensional weight of a box from input provided by the user

#include <stdio.h>

int main(void) {
    printf("Enter the height: ");
    int height;
    scanf("%d", &height);
    printf("Enter the length: ");
    int length;
    scanf("%d", &length);
    printf("Enter the width: ");
    int width;
    scanf("%d", &width);
    int volume = height * length * width;
    int weight = (volume + 165)  / 166;
    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);    return 0;
}
