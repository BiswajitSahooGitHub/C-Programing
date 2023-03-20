#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int ddend = 60;
	int dsor = 0;
	int q;
	if(dsor==0)
	{
		fprintf(stderr,"Division by zero! Exiting...\n");
		getch();
		exit(-1);
	}
	q = ddend/dsor;
	printf(stderr,"Value of quotient: %d\n",q);
	getch();
	exit(0);
}
