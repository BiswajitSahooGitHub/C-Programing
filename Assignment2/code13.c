/*Write a C program to check whether a given integer is positive even, negative even,
positive odd or negative odd. Print Zero if the number is 0.
Test Data :
Input an integer: 13
Expected Output:
Positive Odd*/

#include <stdio.h>
int main() {
    int a;
	printf("Input an integer: ");
	scanf("%d", &a);

	
	   if(a == 0){
			printf("Positive\n");
		} 
		else if(a < 0 && (a%2) != 0) 
		{
			printf("Negative Odd\n");
		} 
		else if(a < 0 && (a%2) == 0) 
		{
			printf("Negative Even\n");
		} 
		else if(a > 0 && (a%2) != 0) 
		{
			printf("Positive Odd\n");
		} 
		else if(a > 0 && (a%2) == 0) 
		{
			printf("Positive Even\n");
		} 	
	
	return 0;
}