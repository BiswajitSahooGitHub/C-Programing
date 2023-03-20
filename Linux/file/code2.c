#include <stdio.h>
#include<stdlib.h>
int main()
{
    char name[30],ch;
    FILE *fp;
    printf("\nEnter new file name:");
    scanf("%[^\n]",name);
    fp = fopen (name, "w+");
    if(fp==NULL)
    {
        printf("\nFail to create a file\n");
        exit(1);
    }
    printf("\nFile is created\n");
    printf("\n Enter data into File & Pass \"clte+d\" to end \n");
    while((ch=getchar())!=EOF)
	    putc(ch,fp);
    fseek(fp,0,SEEK_SET);
    printf("\n\nData in file\n");
    while((ch=getc(fp))!=EOF)
	    putchar(ch);
    fclose(fp);

    return 0;
}
