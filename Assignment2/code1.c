/*1.Write a C program that read 5 numbers and sum of all odd values between them.
 Test Data :
 Input the first number: 11
 Input the second number: 17
 Input the third number: 13
 Input the fourth number: 12
 Input the fifth number: 5
Expected Output:
Sum of all odd values: 46*/
#include<stdio.h>
int main() {
	int i, numbers[5],total=0;
	printf("\nInput the first number: "); 
    scanf("%d", &numbers[0]);
    printf("\nInput the second number: "); 
    scanf("%d", &numbers[1]);
    printf("\nInput the third number: "); 
    scanf("%d", &numbers[2]);
	printf("\nInput the fourth number: "); 
    scanf("%d", &numbers[3]);
    printf("\nInput the fifth number: "); 
    scanf("%d", &numbers[4]);
	for(i = 0; i < 5; i++) {
		if((numbers[i]%2) != 0) 
		{
		   total += numbers[i];
		}	
    }
   	printf("\nSum of all odd values: %d", total);
	printf("\n");
	return 0;
}