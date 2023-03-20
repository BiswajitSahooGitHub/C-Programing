#include<stdio.h>
#include<stdlib.h>
int main(void)
{
        int divident = 20;
        int divisor = 0;
        int quotient;
        if(divisor==0)
        {
                fprintf(stderr,"Division by zero! Existing\n");
		exit(-1);
        }
	quotient = divident/divisor;
	fprintf(stderr,"Value od quotient: %d\n",quotient);
        return 0;
}

