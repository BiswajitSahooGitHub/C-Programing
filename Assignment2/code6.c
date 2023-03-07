/*6. Write a program that reads two numbers and divide the first number by second number.
 If the division not possible print "Division not possible".
Test Data :
Input two numbers:
x: 25
y: 5
Expected Output: 5.0*/

#include <stdio.h>

int main() 
{
	int x, y;
	float div_result;
    printf("Input two numbers: ");
	printf("\nx: ");
    scanf("%d", &x);
    printf("y: ");
    scanf("%d", &y);
   if(y != 0)
     {
   		div_result = x/y;
		printf("%.1f\n", div_result);
	 }
	else
	 {
	 		printf("Division not possible.\n");
	  }
  return 0;
}