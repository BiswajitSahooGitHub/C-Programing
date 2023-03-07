#include <stdio.h>
#include <string.h>
int main()
{
    char s[40];
    int count = 0;
    printf(" \n Enter a string: ");
    gets(s);
    for (int i = 0; i <= s[i]; i++)
    {
        if (s[i] == ' ')
        {
            count++;
        }
    }
    printf("\nTotal number of words in the string is:%d", count + 1);
    return 0;
}