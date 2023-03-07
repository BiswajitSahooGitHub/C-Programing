#include <stdio.h>
#include <string.h>
int main()
{
	char str[20];
	printf("Enter the string: ");
	gets(str);
	printf("The characters of the string are: \n");
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] != ' ') 
        {
			printf("%c\t", str[i]);
		}
	}
	return 0;
}
