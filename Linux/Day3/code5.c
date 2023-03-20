#include<stdio.h>
#include<math.h>
int main()
{
	float x1, y1 ,x2, y2, gdistance;
	printf("Input x1: ");
	scanf("%f",&x1);
	printf("\nInput y1: ");
        scanf("%f",&y1);
	printf("\nInput x2: ");
        scanf("%f",&x2);
	printf("\nInput y2: ");
        scanf("%f",&y2);
	gdistance = ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
	printf("Distance between the said points: %.2f\n", sqrt(gdistance));
	return 0;
}
