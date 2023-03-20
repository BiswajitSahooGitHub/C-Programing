#include<stdio.h>
int main()
{
	int a,b,cho;
	enum{Add, Sub, Mul, Div, Square };
	printf("\n Menu\n");
	printf("\n0. Add\n");
	printf("\n1. Sub\n");
	printf("\n2. Mul\n");
	printf("\n3. Div\n");
	printf("\n4. Square\n");
	printf("\n Enter your choice : \n");
	scanf("%d",&cho);
	printf("\n Enter Any Two Numbers : \n");
	scanf("%d%d",&a,&b);
	switch(cho)
	{
		case 0:
			printf("\n Addtion of two no. : %d\n",a+b);
			break;
		case 1:
                        printf("\n Subtration of two no. : %d\n",a-b);
                        break;
		case 2:
                        printf("\n Multiplication of two no. : %d\n",a*b);
                        break;
		case 3:
                        printf("\n Division of two no. : %d\n",a/b);
                        break;
		case 4:
                        printf("\n Square of two no. : %d/t%d\n",a*a,b*b);
                        break;
	}
	return 0;
}
