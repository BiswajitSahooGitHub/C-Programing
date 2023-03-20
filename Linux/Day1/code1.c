#include<stdio.h>
#include<errno.h>
#include<string.h>
extern int errno;
int main(void)
{
	FILE*fh;
	printf("Errno before: %d\n",errno);
	fh = fopen("hello.txt","r");
	if(fh==NULL)
	{ 
		printf("Errno after: %d\n",errno);
		printf("Errno msg: %s\n",strerror(errno));
	}
	else
	{
		fclose(fh);
	}
	return 0;
}
