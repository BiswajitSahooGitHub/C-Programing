#include<stdio.h>
#include<stdbool.h>
int main(void)
{
        FILE*fh;
        fh = fopen("hello.txt","r");
        if(fh==NULL)
        {
                perror("Message from perror");
                return -1;
        }
        while(true)
        {
                char ch = fgetc(fh);
		if(feof(fh))
		{
			break;
		}
		printf("%c",ch);
        }
	fclose(fh);
        return 0;
}

