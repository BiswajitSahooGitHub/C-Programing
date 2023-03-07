#include <stdio.h>
#include <string.h>
int main()
{
    char s[40];
    int i, len, temp;
    printf(" \n Enter a string to be reversed: ");
    scanf("%s", s);
    len = strlen(s);
    for (i = 0; i < len / 2; i++)
    {
        temp = s[i];
        s[i] = s[len - i - 1];
        s[len - i - 1] = temp;
    }
    printf(" \n After the reverse of a string: %s ", s);
    return 0;
}