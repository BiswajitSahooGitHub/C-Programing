/*12.C Program to Check Whether a Number is Even or Odd*/

#include <stdio.h>
int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if(n % 2 == 0)
        printf("%d is even.", n);
    else
        printf("%d is odd.", n);
    
    return 0;
}