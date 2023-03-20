#include<stdio.h>
int main(void)
{
        FILE*fh;
        fh = fopen("hello.txt","r");
	char ch = fgetc(fh);
        if(ferror(fh))
        {
                printf("Error in reading from file!");
        }
	clearerr(fh);
        if(ferror(fh))
        {
                printf("Error again in reading from file!");
        }
        fclose(fh);
        return 0;
}
