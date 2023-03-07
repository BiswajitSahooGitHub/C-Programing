/*C Program to Add Two Distance Given as Input in Feet and Inches. distances*/
#include <stdio.h>
struct distance
{
    int feets;
    int inchs;
};

void addDistance(struct distance firstdistance, struct distance seconddistance)
{
    struct distance totalsum;
    totalsum.feets = firstdistance.feets + seconddistance.feets;
    totalsum.inchs = firstdistance.inchs + seconddistance.inchs;

    totalsum.feets = totalsum.feets + totalsum.inchs / 12; // 1 feet has 12 inches
    totalsum.inchs = totalsum.inchs % 12;

    printf("\nTotal Distance is: %d Feets, and %d' Inches", totalsum.feets, totalsum.inchs);
}

int main()
{

    struct distance firstdistance, seconddistance;

    printf("Enter the First Distance in Feets: ");
    scanf("%d", &firstdistance.feets);
    printf("Enter First Distance in Inches: ");
    scanf("%d", &firstdistance.inchs);

    printf("\n\nEnter Second Distance in Feets: ");
    scanf("%d", &seconddistance.feets);
    printf("Enter Second Distance in Inches: ");
    scanf("%d", &seconddistance.inchs);

    addDistance(firstdistance, seconddistance);
    return 0;
}