#include<stdio.h>
#include<errno.h>
#include<string.h>
int main(void)
{
        FILE*fp;
        fp = fopen("hello.txt","r");
        if(fp==NULL)
        {
                printf("Errno msg: %s\n",strerror(errno));
        }
        else
        {
                fclose(fp);
        }
        return 0;
}

