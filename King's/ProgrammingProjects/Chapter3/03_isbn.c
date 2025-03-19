// This program breaks down the ISBN code to make it easier for the reader to get the information about it.

#include <stdio.h>

int main(void)
{
    int gs1Prefix, grpId, publisherCode, itemNumber, checkDigit;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gs1Prefix, &grpId, &publisherCode, &itemNumber, &checkDigit);

    printf("\nGS1 prefix: %d\nGroup identifier: %d\nPublisher code: %d\nItem number: %d\nCheck digit: %d\n", gs1Prefix, grpId, publisherCode, itemNumber, checkDigit);
    
    return 0;
}