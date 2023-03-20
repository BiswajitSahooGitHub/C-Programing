#include<stdio.h>
int main()
{
	int a,b,cho;
	enum {M800 = 17, Zen = 20, Wagonor = 24, Swift = 21, Alto = 18 };
	printf("\n Maruti Suzuki\n");
	printf("\n0. 800\n");
	printf("\n1. Zen\n");
	printf("\n2. Wagonor\n");
	printf("\n3. Swift\n");
	printf("\n4. Alto\n");
	printf("\n Enter your choice : \n");
	scanf("%d",&cho);
	switch(cho)
	{
		case 0:
			printf("\n Miledge : %d\n",M800);
			break;
		case 1:
                        printf("\n Miledge : %d\n",Zen);
                        break;
		case 2:
                        printf("\n Miledge : %d\n",Wagonor);
                        break;
		case 3:
                        printf("\n Miledge : %d\n",Swift);
                        break;
		case 4:
                        printf("\n Miledge : %d\n",Alto);
                        break;
	}
	return 0;
}
