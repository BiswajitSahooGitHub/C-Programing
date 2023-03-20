#include <stdio.h>
#include <errno.h>
#include <string.h>
int main ()
{
	FILE *file_name;
 	file_name = fopen("Tech.txt", "r");
  	printf("The value of errno is %d!\n", errno);
  	printf("Error message: %s\n", strerror(errno));
  	perror("perror");
  	return 0;
}
