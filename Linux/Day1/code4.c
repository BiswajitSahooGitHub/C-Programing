#include<stdio.h>
#include<stdlib.h>
int main(void)
{
        int divident = 20;
        int divisor = 5;
        int quotient;
        if(divisor==0)
        {
                fprintf(stderr,"Division by zero! Existing\n");
                exit(EXIT_FAILURE);
        }
        quotient = divident/divisor;
        fprintf(stderr,"Value od quotient: %d\n",quotient);
        exit(EXIT_SUCCESS);
}

