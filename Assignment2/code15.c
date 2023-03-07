/*15. C Program to Check Whether a Number is Positive or Negative*/

#include<stdio.h>
int main()
{
    int no;
    printf("Ënter a number:");
    scanf("%d",&no);
    if(no <= 0)
    {
        printf("Entered a negative number");
    }
    else
    {
        printf("Entered a positive number");
    }
}