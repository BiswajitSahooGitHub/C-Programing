#include<stdio.h>
int main()
{
	int x;
	char a;
	double b;
	float f;
	unsigned u;
	signed s;
	printf("Size of int: %ld\n", sizeof(x));
	printf("Size of char: %ld\n", sizeof(a));
	printf("Size of double: %ld\n", sizeof(b));
	printf("Size of unsigned: %ld\n", sizeof(u));
	printf("Size of signed: %ld\n", sizeof(s));
	printf("Size of float: %ld\n", sizeof(f));
	return (0);
}
