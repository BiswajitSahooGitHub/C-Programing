#include<stdio.h>
#include<Adr.h>
/*int addition(int a, int b)
{
    	int sum = a + b;
    	return sum;
}
int subtract(int a, int b)
{
    	int difference = a - b;
    	return difference;
}
int multiply(int a, int b)
{
    	int multiply = a * b;
    	return multiply;
}
float division(float a, float b)
{
    	float divide = a / b;
    	return divide;
}
float mod(int a, int b)
{
    	int rem = a % b;
    	return rem;
}*/
int main()
{

    	int num1, num2;
    	printf("Enter the first number: ");
    	scanf("%d", &num1);
    	printf("Enter the second number: ");
    	scanf("%d", &num2);
    	printf("Arithmetic operations on %d and %d: \n", num1, num2);
    	printf("Addition: %d\n", add(num1, num2));
    	printf("Subtraction: %d\n", subtract(num1, num2));
    	printf("Multiplication: %d\n", multiply(num1, num2));
    	printf("Division: %f\n", division(num1, num2));
    	printf("Modulus: %f\n", mod(num1, num2));
    	return 0;
}
