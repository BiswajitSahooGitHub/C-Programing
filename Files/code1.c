#include <stdio.h>
#include<stdlib.h>
int main()
{
    char name[30];
    FILE *fp;
    printf("\nEnter new file name:");
    scanf("%[^\n]",name);
    fp = fopen (name, "w");
    if(fp==NULL)
    {
        printf("\nFail to create a file\n");
        exit(1);
    }
    printf("\nFile is created\n");
    return 0;
}